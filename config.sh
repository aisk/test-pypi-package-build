# Define custom utilities
# Test for macOS with [ -n "$IS_MACOS" ]

function pre_build {
    # Any stuff that you need to do before you start building the wheels
    # Runs in the root directory of this repository.
    :
}

function run_tests {
    # Runs tests on installed distribution from an empty directory
    python --version
    python -c "from lunzi import lunzi; print(lunzi.add())"
}
