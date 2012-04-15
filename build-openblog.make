api = 2
core = 7.x
; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make
projects[openblog][download][type] = "git"
projects[openblog][download][profile] = "contributions/profiles/openblog"
projects[openblog][download][revision] = "7.x-1.x"
