# If interactive
if [ "$PS1" ]; then

    # If not root
    if [ "$(whoami)" != "root" ]; then

        # Configure cd to default to workspace
        alias cd="HOME=\"$CODESPACE_VSCODE_FOLDER\" cd"

        # Ensure files created with `code` are autosaved too
        code() {
            local options=false
            for arg in "$@"; do
                if [[ "$arg" =~ ^- ]]; then
                    options=true
                    break
                fi
            done
            if [ "$options" = false ]; then
                for arg in "$@"; do
                    touch "$arg" 2> /dev/null
                done
            fi
            command code "$@"
        }

        # Configure prompt
        prompt() {
            local dir="$(dirs +0)" # CWD with ~ for home
            dir="${dir%/}/" # Remove trailing slash (in case in /) and then re-append
            dir=${dir#"/workspaces/$RepositoryName/"} # Left-trim workspace
            dir="${dir} $ " # Add prompt
            dir=${dir#" "} # Trim leading whitespace (in case in workspace)
            echo -n "${dir}"
        }
        PS1='$(prompt)'
    fi
fi
