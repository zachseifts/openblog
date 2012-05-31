api = 2
core = 7.14
; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org.make
projects[openblog][version] = "7.x-1.x-dev"
projects[openblog][download][type] = "git"
projects[openblog][download][url] = "http://git.drupal.org/project/openblog.git"
projects[openblog][download][branch] = "7.x-1.x"
projects[openblog][type] = "profile"

