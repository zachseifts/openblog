<?php
/**
 * @file
 * openblog_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openblog_content_taxonomy_default_vocabularies() {
  return array(
    'post_tags' => array(
      'name' => 'Post Tags',
      'machine_name' => 'post_tags',
      'description' => 'Tags for blog content.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
