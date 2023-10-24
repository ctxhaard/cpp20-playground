let 
  pkgs = import <nixpkgs> {};
in
  with pkgs;
  mkShell {
    name = "cpp20-playgound";
    packages = [
      clangStdenv
      ccls
      cmake
    ];
  }
