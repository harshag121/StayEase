# StayEase


StayEase is a hotel management system developed using C++. This project helps manage hotel operations efficiently by providing a user-friendly interface for managing hotel rooms, reservations, and guest information.

## Project Structure

- `build_run.bat`: A batch file to compile and run the application.
- `StayEaseApp.cpp`: Main entry point of the application.
- `StayEaseManager.cpp`: Core logic for managing hotel operations.
- `StayEaseManager.h`: Header file for the core logic.
- `StayEase.exe`: The compiled executable of the application.
- `README.md`: This documentation file.
- `Makefile`: Build configuration for the project.

## Getting Started

### Prerequisites

- Ensure you have a C++ compiler (e.g., `g++`) installed.
- Ensure that your system is connected to the internet and DNS settings are properly configured.

### Installation

1. **Clone the Repository**

   ```bash
   git clone https://github.com/harshag121/StayEase.git
   ```

2. **Navigate to Project Directory**

   ```bash
   cd StayEase/StayEase
   ```

3. **Build the Project**

   Run the `build_run.bat` file to compile and build the project:

   ```bash
   build_run.bat
   ```

### Usage

After building the project, you can run the application using the executable:

```bash
StayEase.exe
```

The application will launch and provide options to manage hotel operations.

### Configuration

The `build_run.bat` file is configured to compile `StayEaseApp.cpp` and `StayEaseManager.cpp` into the `StayEase.exe` executable. Ensure that any changes to source files or file names are reflected in this batch file to maintain proper build functionality.

### Troubleshooting

- **Network Issues**: If you encounter network-related errors, ensure your internet connection is stable and DNS settings are correctly configured.
- **Compilation Errors**: Verify that all source files are present and correctly referenced in `build_run.bat`.

