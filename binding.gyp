{
  "targets": [
    {
      "target_name": "ubuntu_power_save",
      "sources": [ "ubuntu_power_save.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}