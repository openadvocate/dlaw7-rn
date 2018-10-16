<?php
/**
 * @file
 * dlaw_partner.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function dlaw_partner_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Court',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '002a9d19-3659-4e4b-af0a-86b24dc21c0a',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '27e17fa3-3666-444a-8402-1159e02cafee',
    ),
  );
  $terms[] = array(
    'name' => 'Atascosa County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '016f82c7-087a-4051-acc9-c342975324cd',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Predatory Lending',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '02196d76-678b-4073-b065-631c5737f402',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'Lampasas County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '033c1b86-659d-4950-8c73-17ca690c4be2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Fort Bend County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '054058b3-b2e8-425f-b06c-9a392904f87b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Rental Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '05e1d8d6-06c3-4730-a7a6-04afc2f4dbdc',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'e566ddb9-a674-4535-b21e-a853ca64eec7',
    ),
  );
  $terms[] = array(
    'name' => 'Glasscock County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '05e6eceb-f263-4fa9-bcb9-06e4c02618f9',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Crime Victims',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '06410cc2-1e98-4252-94a2-970e2e877b5c',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Food Pantry',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '06c5a1d0-728b-4efc-b8ff-52005e7ddf66',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'e566ddb9-a674-4535-b21e-a853ca64eec7',
    ),
  );
  $terms[] = array(
    'name' => 'Tom Green County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '071aeaa6-8995-4190-92e0-42e727c981d1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Comanche County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '07592a65-d91b-4ac7-b449-507035337964',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Camp County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '07a00047-4097-4d06-8e8e-d814a38cc189',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Adult Guardianship/Conservatorship',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '07bebbb9-d2fb-46d8-b0a1-ac3663cdc622',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Titus County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '07fba543-cce5-4347-857f-4fb9234b031a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Testate',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '080cd9ad-8861-44f8-8e59-da2889137ae3',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1ad7b664-a24b-4ea3-9c79-32d49a17eec7',
    ),
  );
  $terms[] = array(
    'name' => 'Urdu',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '08a23f4b-df3d-4c16-83c5-4af072ab6e97',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Non-Residential',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '09424a32-85be-4aef-a888-3dd0ec310d55',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Housing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Other Healthcare',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '0a99eea6-2a28-436d-916d-e619a190620c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Daycare',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '0aebe9b1-41c0-4bae-9f0c-9228e1b2baa3',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Hardship Exemptions',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '0c30bf35-27ef-446e-9353-1cb8c67ab91f',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    ),
  );
  $terms[] = array(
    'name' => 'Llano County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0c5c69c7-1af7-45f2-badf-6d8673d2b6a5',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Healthcare',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Children\'s Health Insurance Program',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '0f66ed55-f173-4ba3-a26e-802dbd8be1dd',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Sherman County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0fb18d46-35c4-4a15-8094-81cbf7401b9a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Van Zandt County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '10942b3c-5b98-4f5a-8e8f-be971499349e',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Wills',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '10ea0528-1deb-4aa8-b083-60d0fc28d3b1',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '4742d8fd-17b9-42c7-a2c5-186c4cd1d14b',
    ),
  );
  $terms[] = array(
    'name' => 'Culberson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1114a3b0-b119-48df-a18f-476f9ea55df3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Creditor Harassment',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '11697bc3-1a25-4282-a780-c8d2e4b66bac',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'School Discipline',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '1211b18a-3996-4712-bb07-fd2a7ec6873c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'bad10063-99a2-45c2-8766-928fccff8cb8',
    ),
  );
  $terms[] = array(
    'name' => 'Debt Collection',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '129a7089-0c0b-42f5-b8e1-399a6f5d8150',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'Starr County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '12f4c8b9-1426-4e42-a607-90949d453a68',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Medicare',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '1398e01f-022c-4d86-b687-a2f367c7c439',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Crisis Prevention',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '14321c63-fcd6-4a3f-b6b2-0d1699583974',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Harris County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '14462e87-5f57-4cdb-a9a9-71a461a5ca4a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Martin County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '15bc318a-b866-45bc-8e70-cb1fe564a790',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Montgomery County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '15e2263d-fc84-47e7-8186-1dea28b0d515',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bankruptcy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '160e2540-be8a-41ce-a09e-50449a1ac6e7',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 20,
    'uuid' => '18163825-b675-44db-9035-be954e773c43',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Kendall County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '183de14b-28e0-45f5-9ba3-0452c1944e76',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Domestic Violence/Protective Orders',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '1a165368-db22-4ae7-a22c-9561a8736d93',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Hutchinson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1a392bb2-be2f-44f8-81ea-2c3da0e5c53b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Kimble County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1a43abc8-5725-4fa1-97ec-c1e1c9a00041',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Probate',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 16,
    'uuid' => '1ad7b664-a24b-4ea3-9c79-32d49a17eec7',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Madison County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1af4c27a-1c44-4da0-991a-3fe5ab8999db',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'LGBT',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '1af8575f-d69f-4f0e-b45f-21e707b1cfa7',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Mail',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '1b06916c-387a-419c-92aa-4209b272d3a0',
    'vocabulary_machine_name' => 'intake_method',
  );
  $terms[] = array(
    'name' => 'Consumer Law',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1b493d14-c01e-4652-87b2-3d3675379104',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Jackson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1b7c4668-9cff-4e88-a559-180a813fc867',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Family',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1c013fd1-491f-4153-86db-28b8226b2133',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'ad3943b0-ebab-4730-854e-adfafeabcf7d',
    ),
  );
  $terms[] = array(
    'name' => 'Houston County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1d0b9f61-ef92-4c40-84e5-b4cdf021c807',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Personnel/Volunteers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1f4dc365-9f84-428c-8dcd-4444a3716099',
    'vocabulary_machine_name' => 'language_service_method',
  );
  $terms[] = array(
    'name' => 'Zavala County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1fa6e421-3d4d-44ec-8bff-1ed5d90568fc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Housing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '2007779c-1a8a-4254-86ea-ba9daca8270c',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Ellis County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '20521b96-0b4f-48cc-9d7c-bef00820fab4',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Freestone County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '20b74cf9-95da-41e5-9431-d2109dfd9b5d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Crime Victim Compensation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '20cc7ae3-ad8e-4da0-a1ed-4fa7847cadc6',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edf078c7-3d20-4779-878b-7551b9f5c62e',
    ),
  );
  $terms[] = array(
    'name' => 'Lavaca County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '21499b2f-8bc1-4114-a05c-bdac9baca438',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Kaufman County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '214febd1-4a73-4541-b5ff-5be4c981a032',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'VITA',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '21608ccb-a3ec-44a8-bfca-20db8fcf2e43',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    ),
  );
  $terms[] = array(
    'name' => 'Sabine County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '22eaea42-aa87-4bbe-8ed9-2d24c5620b71',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Grimes County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '239bb243-2d82-4156-a2af-10a66bcd59eb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Borden County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2442930b-cdeb-4424-82a8-a9c2223a932d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Dallam County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '25790424-426f-4695-99c7-40f5d44a7b81',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Federally Subsidized Housing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '257ae64f-4dff-48c6-877c-5ba2917e65b9',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    ),
  );
  $terms[] = array(
    'name' => 'Privacy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '267fd55f-98b8-49e6-afd1-acc546d179ee',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edf078c7-3d20-4779-878b-7551b9f5c62e',
    ),
  );
  $terms[] = array(
    'name' => 'Donley County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '26ef01c4-128b-4430-a645-25fd267cc38f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Kent County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '27046b67-82c0-4b1f-9e2a-e409b8c8a77b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Accompaniment',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '27e17fa3-3666-444a-8402-1159e02cafee',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Shackelford County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '295fe077-66cc-4892-a8dc-c5555b4c2d1d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Kleberg County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '29fa4164-412b-415f-8bc8-8f26395050cb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Parmer County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2bd23834-51a0-42d4-a7d7-2f32aa752e45',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Brown County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2be3b4ca-72ea-46ad-9661-7cc925f288b9',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Frio County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2bffca4c-f0f7-49dd-974c-bdcb4d46c496',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Burnet County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2d5af232-64ea-421a-a4b2-2a48f071c88e',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Upton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2d7049c5-3730-4b52-9482-16bcf314843a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Dallas County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2deda68b-8047-4060-8ee8-2f96906c2fc4',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Occupational',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2ef94371-d71a-4368-bb1c-93fbb45f4ecc',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '73579fa6-f082-4a2c-a637-e67b565ea358',
    ),
  );
  $terms[] = array(
    'name' => 'Advice and/or Brief Services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2f1df3f3-6796-4642-9b4e-86a7d0817678',
    'vocabulary_machine_name' => 'direct_services',
  );
  $terms[] = array(
    'name' => 'Jim Hogg County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2faa10f5-8e6f-46a4-8c88-e5d08c55b537',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Castro County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '30249a47-8857-4cf2-be71-a610443f3452',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Lubbock County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '31abfabc-07fc-4a84-90ed-3604807ce981',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Paternity',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '31b822e3-9499-4160-8e65-15a39d623267',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'TANF',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '3277f275-e5d1-4205-8546-ab6b4e1ff90d',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    ),
  );
  $terms[] = array(
    'name' => 'Navarro County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '32f7c416-0f84-43f3-bc5a-3a21217494e7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Galveston County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '345ceb42-fecd-4719-9756-67fdda3f69e3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Johnson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3501da71-8d8b-482d-b78f-4787e2b93268',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Social Security Retirement',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '37f01277-b000-4898-970d-2d8844487a7b',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    ),
  );
  $terms[] = array(
    'name' => 'Tyler County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '38672162-2d55-495e-8c94-6a818e01f08d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Liens/Levies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3b020b98-8c48-46f0-b2ff-e73a0fee099e',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    ),
  );
  $terms[] = array(
    'name' => 'Bandera County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3cdc77ef-bb08-4830-8645-d6f5c523031c',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Immigration',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Job Training',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3d892a66-a18e-4744-bf51-771ce8e148c8',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'eb83864c-da95-4f8e-93be-8aaa20a54f73',
    ),
  );
  $terms[] = array(
    'name' => 'Landlord/Tenant',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '3db0e7ef-2e2b-456e-8b9f-0eb99f4f372d',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    ),
  );
  $terms[] = array(
    'name' => 'Medical',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3dc7a908-3d91-44ea-a7be-5b3990bb2f41',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '27e17fa3-3666-444a-8402-1159e02cafee',
    ),
  );
  $terms[] = array(
    'name' => 'Hartley County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3dc958c4-e71c-4b24-8639-c9f057c826f2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Real County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3e64ecb7-3c9d-48c1-924a-b6854240cf9a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Adoption',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '3ea7bdce-dbda-4f35-b283-4e3eebc70f6d',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Grandparent/Family Access',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '3ed622d4-138d-424c-b1c9-9151fd8e918c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Group',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '40b353b8-ca9d-40b3-bd3e-4df19678bd6c',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'ad3943b0-ebab-4730-854e-adfafeabcf7d',
    ),
  );
  $terms[] = array(
    'name' => 'Yoakum County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '43ad7465-151e-4994-b007-d709d6ae0fdb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'On-call Translators',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '44200d16-b9a6-487b-b36a-43fcbfe11489',
    'vocabulary_machine_name' => 'language_service_method',
  );
  $terms[] = array(
    'name' => 'Residential',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => '442a81c0-d68c-47de-9687-2ea8ef7cb6b8',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Hall County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '44ddb40b-6fb3-458a-8f0f-ae493ec5f80e',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Randall County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4605652c-e80c-4bf6-ba40-0881481ba562',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Restitution Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4648ab9e-7a04-4c0d-98d5-bbdc4c5589b5',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edf078c7-3d20-4779-878b-7551b9f5c62e',
    ),
  );
  $terms[] = array(
    'name' => 'Callahan County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '464c321c-9564-4f0c-beec-5e0470afc310',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4695d48a-57fb-43bb-90b3-95c8aaf05139',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Morris County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46a9c0d8-3d65-4e9f-a18c-ee1b816351ad',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Marion County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46dd82ec-1435-4920-b4f9-091f36408e86',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'County Based Health Programs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '46f6eab3-993e-416d-aa95-268997eb12e6',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Estate Planning',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '4742d8fd-17b9-42c7-a2c5-186c4cd1d14b',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Kenedy County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '483c12d6-d473-4ea8-8b03-d4ca4efb446d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'San Augustine County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '488a5205-f5e0-4916-8eb2-e0a4867b07da',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Burleson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '48eac150-6d4c-4210-9c07-3f4fb47095f8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Willacy County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4965a41b-3185-4a32-b51a-1123b8705e32',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Jeff Davis County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '49810f6e-dee2-45aa-8562-7ff2fd2545ee',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Shelby County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '49f5af87-1c8d-49c8-bf24-c3b8fd50bfb7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Child Custody',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '4a40e817-7b48-445b-8846-b3fea73ae775',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Hays County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4b5c67e4-3217-4f52-b225-b22aa0b450cb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Aransas County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4e54c06f-389c-4e9c-abaa-2ee962d23466',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Val Verde County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4f3e2781-f782-4cf6-9cf9-b95c5bb9beed',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Special Education',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '4f4bf09b-f3bf-4fb6-889f-be749465e3f1',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'bad10063-99a2-45c2-8766-928fccff8cb8',
    ),
  );
  $terms[] = array(
    'name' => 'Rusk County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4f902026-92c7-4341-b10c-349851ac48cc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Asylum',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '50cb6b78-2c5d-4abb-9c85-01f0182dc241',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Haskell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '51f66813-dadf-4400-b7e1-da68d73e6973',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Crosby County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '527f5ccd-7038-4a65-97e0-283672577d2d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Emancipation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '5295d2c5-ccde-40e0-aadd-169229dc32a7',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '56ec5a3a-4694-42ca-b774-a7716a8b2e89',
    ),
  );
  $terms[] = array(
    'name' => 'Women',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => '5339c347-7b08-4be9-a578-d3ee74468da7',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Duval County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '534e69b6-37c4-4d4b-bb99-c00830115580',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Shelter - Homeless',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '53b66849-0b61-4be6-abb5-2637f5637d0e',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '2007779c-1a8a-4254-86ea-ba9daca8270c',
    ),
  );
  $terms[] = array(
    'name' => 'Rains County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '549bd7aa-a967-4840-9d92-cd9e02ceb2d4',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'El Paso County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54fe0540-5706-4623-813d-387b66522843',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Contract/Warranties',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '5570269a-d56d-4845-9a37-fbdbc5e26aeb',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'Driver\'s',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '562c07e7-f314-4641-aa10-746c611838b9',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '73579fa6-f082-4a2c-a637-e67b565ea358',
    ),
  );
  $terms[] = array(
    'name' => 'Nacogdoches County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '565fa66d-b8d1-43b1-9dc3-1b803cfed26f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Crane County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '568e381d-59a9-4582-9135-0a2793f17a42',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Childress County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '56984dd0-2861-49dd-9d33-cc3959e1b423',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Homeless',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '56df71e9-ce7f-4a18-971f-1bbc6532fa8c',
    'vocabulary_machine_name' => 'population_served',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Juvenile',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '56ec5a3a-4694-42ca-b774-a7716a8b2e89',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Tagalog',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '577fbe4b-ea0e-4333-823a-983306ec0045',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Fisher County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58258e1e-51a6-4762-8b89-abd45647a594',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hamilton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58e5933a-b66c-4034-b9b9-88a0bfbb8c9d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Rockwall County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58ea212e-1fef-491b-8344-485673395efa',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Scurry County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58f9058b-d82b-49f1-943b-b1900099dc57',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hemphill County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '59241928-2253-4736-9d49-d77b626203d1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Erath County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5a24c25d-2393-47a5-9ad5-483f4bc7f6af',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Employment-based Visas',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '5b27a41e-77db-4e7a-b161-806453e72cbc',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Cantonese',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '5b2c9f8d-f1e1-41df-b473-67ecb97ccec3',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Leon County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5ba4c11c-f7d0-41a4-bda7-633a2e5222ad',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Briscoe County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5da7521c-b5d4-4ac4-b174-56ac841da4af',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hidalgo County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5db372c4-e5c2-471f-8b28-3376e64b84cb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Foard County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5deef91f-61d1-4eef-9e20-edd0af911f7f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Colorado County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '60b5d3f8-125c-41b4-b17a-4cecf7d42c41',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Personal Rights',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 15,
    'uuid' => '614615f2-0afc-453a-807c-371ed1a48e39',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Milam County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '623bf4ac-31ce-413b-a325-e30844fd7b93',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '62659593-cffa-4a99-8bbd-78f13f81b209',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Guadalupe County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62cfc3bd-d487-4893-b26c-63111af5d5c2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bowie County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '631c5e9c-bb56-4a76-aa57-09d247a4530f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Walker County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '632eda34-111f-4b38-8cd7-b61ea8b318f3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'McMullen County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6340692b-3283-46b4-90d9-a0384350e657',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Reeves County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '64645492-3fd1-4764-b517-fe58f3f65a38',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Brewster County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '655cdd66-29f0-48bf-99ad-9fdd5e60a8d8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Garza County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6568c919-df2f-4b1f-b715-4a0d66e11909',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Lipscomb County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '667a5a75-69de-49c8-b241-bdb029aeb174',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Denton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '668268e5-a739-414a-aae2-d3b2666c7255',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Sutton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '668ccd45-e1c7-4a77-ae28-dd7f91b3a775',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Victoria County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '676df6f6-22bc-40af-8c68-aa14f75f032b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Administrative Hearings',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '67ca422b-c257-4373-9ceb-61ccca64a009',
    'vocabulary_machine_name' => 'direct_services',
  );
  $terms[] = array(
    'name' => 'Crime Victim Compensation Application Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '6ad5cc23-5474-4a6c-828c-5f5fa0c447b9',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'La Salle County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6b8529c8-e23c-4794-a648-b5291be1da7b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Nueces County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6bcde2fb-c96a-4ae7-91d5-2af849e5b803',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hardeman County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6d1f313c-41ca-4a05-959a-cb5982db9bf8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Pecos County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6d35f64d-a1ed-4203-9285-67fee0e49c06',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Wichita County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6d84c89f-c7bc-4825-8a06-65f90b10a3b9',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Naturalization/Citizenship',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '6d9212fe-ef74-4eba-a80b-68eb556ae062',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Cass County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6da077c7-a61a-4a36-96d6-d9f3bf172817',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Transitional',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6ddefa7c-8e43-46f6-afd4-7c746418ae66',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '2007779c-1a8a-4254-86ea-ba9daca8270c',
    ),
  );
  $terms[] = array(
    'name' => 'Korean',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '6deadf4c-ecbb-4288-a238-7e227e02a2b9',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Roberts County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6e939590-545d-4b08-84f9-2e35749a3e68',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Advanced Directives',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6f423f89-5476-4297-8dbc-257afb92d02b',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '4742d8fd-17b9-42c7-a2c5-186c4cd1d14b',
    ),
  );
  $terms[] = array(
    'name' => 'Schleicher County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '70436494-cab2-49cc-9b99-1801d91999c0',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Life Skills Training',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '71555d69-5282-49fb-9a0e-8259fea20b0b',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'eb83864c-da95-4f8e-93be-8aaa20a54f73',
    ),
  );
  $terms[] = array(
    'name' => 'Wilson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '71d9158e-7139-4d9f-b7c9-d656d1b67d40',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bailey County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '721424f2-d397-4d02-8f37-05c3533ee2db',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Runnels County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72a5379f-80a3-4f86-815a-c9a0e7c54ef3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Social Security Disability',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '72b94c21-a68d-44d1-a578-2ac588adc658',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    ),
  );
  $terms[] = array(
    'name' => 'Carson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '73053d93-87fc-4a21-9b8f-4124341a896a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Wharton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '732c58d0-93ad-44f4-a19a-aac0e02af922',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Licenses',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 14,
    'uuid' => '73579fa6-f082-4a2c-a637-e67b565ea358',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Cottle County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '73aabcf3-5d46-44bd-a0f5-1b5dc1a9ffd3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Seniors',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '73f30d5c-2d96-46d0-a1bc-e1bf9e422ced',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Andrews County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '74093bd2-55c3-4c75-a38e-67bae2e70d06',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Wood County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '74215b1d-80fa-44a8-8625-402b2ad3dbe2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Cherokee County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '74494754-b4b4-4d3a-b30e-07db2e3d4deb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Tort',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 18,
    'uuid' => '74e1847a-7bef-41c5-bb43-a9d6ff6d68c0',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'San Saba County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '75313e14-3e70-41b9-9965-b5c40aaba301',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'EITC Appeals',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '75823771-9fac-482c-9bfc-1c6cd78e7371',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    ),
  );
  $terms[] = array(
    'name' => 'Panola County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '75e0ad50-3c74-4563-861d-86e1baed8ac9',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Loving County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '764f5404-7c9a-4d48-9641-73c927603c3a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Cochran County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7661b74f-d86e-478c-8b86-1e6aca28fa03',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Collin County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '76eb32fb-00be-4aed-8136-b13b66ce011e',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'DACA',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '7840c90f-22a3-4079-8ac2-5b99293d4622',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Reagan County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7b3a3e31-93ad-471b-9c0c-77520631a832',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Baylor County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7bb2c436-213a-4094-80d1-e446989e465f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Jasper County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7e5208b2-8858-4307-b717-85e3f031aaca',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Lynn County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7e86cc9f-d330-40ab-84a4-1cd863336705',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Montague County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7ea46032-807f-413d-aff3-4bb9b8ee95fc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Menard County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7eb4f450-e39c-4bd0-bbe9-b3aa4988dae4',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Wheeler County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7eeaa0ee-c93d-4917-9e3b-f1f030abdc08',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Civil',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7f52a00a-69a1-4d3b-a759-c44751dfb66f',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '614615f2-0afc-453a-807c-371ed1a48e39',
    ),
  );
  $terms[] = array(
    'name' => 'Foreclosure',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7f5ce692-cedb-4658-b157-56a3c8855bc2',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    ),
  );
  $terms[] = array(
    'name' => 'Franklin County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7f5f4363-536e-4524-a364-7be7ef8ac7cc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'King County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7f6fa36e-0851-488f-a474-581b496c53ff',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hale County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7fb4c19e-86fe-4785-8be8-4d8abbba7019',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Utility Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '7fc496f3-9f0d-4d01-80c7-e3358a7222ca',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'e566ddb9-a674-4535-b21e-a853ca64eec7',
    ),
  );
  $terms[] = array(
    'name' => 'Private Insurance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '818ab1fa-55dd-4a37-8a9d-2a7d5414b85f',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Coleman County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8196d4c5-776a-42f5-b39f-2a5cab4232f7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Men',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '81d5aa96-531a-4d3e-a3e3-8c6d75b283e8',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Irion County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8351a831-6b53-4020-99e1-bd9622a3c393',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Winkler County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '83809915-e7d3-4b6e-9e80-0e5371b735f0',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Fannin County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '83839ca6-e683-44f2-ba78-c1c848327ed3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Travis County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '839974b6-1ceb-448d-b2ca-736e3ab49081',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Armstrong County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '83fa0025-a40b-422a-a605-6a44f14c3ad3',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Swisher County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84048c70-9d3c-4389-8d49-e85a10a6f6a8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Matagorda County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84255eb6-3643-4521-a10c-dea53e037a58',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Maverick County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '848e261c-d584-43bf-9927-d0ea35d896de',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Delinquency',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8696205b-6a1d-46e3-9fe6-5c3ff0ed7475',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '56ec5a3a-4694-42ca-b774-a7716a8b2e89',
    ),
  );
  $terms[] = array(
    'name' => 'Coryell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '86a53dd0-681d-4663-88f4-46aa067cb189',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Upshur County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '86cdc471-20b2-4c17-a920-59da1cec7eca',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Clothing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '87220765-8458-49ad-a02c-ca3ab617eb08',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'e566ddb9-a674-4535-b21e-a853ca64eec7',
    ),
  );
  $terms[] = array(
    'name' => 'Student Financial Aid',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '87597e84-8f02-4ce1-ae9d-32efb369ed58',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'bad10063-99a2-45c2-8766-928fccff8cb8',
    ),
  );
  $terms[] = array(
    'name' => 'Trusts',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '877df6c8-0bbe-49bd-8daf-e2032931b005',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '4742d8fd-17b9-42c7-a2c5-186c4cd1d14b',
    ),
  );
  $terms[] = array(
    'name' => 'Mediation Services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '87c3ad75-86cd-44f1-ad84-4cd36b2c965a',
    'vocabulary_machine_name' => 'direct_services',
  );
  $terms[] = array(
    'name' => 'Expunction/Non-Disclosure',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '881a7bbf-ab61-41af-9bd6-f48d4158ed10',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Indian/Tribal Law',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => '88267016-ac03-46fd-bff2-f66072f42c8b',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Gonzales County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8862af72-a816-4e90-a916-89133c4207a2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Mills County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '887187a8-d502-4879-84f8-ba0b95a78099',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Divorce',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '895ec112-6ecd-4c34-aa23-013f5a61c744',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Goliad County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8969e8d6-ab78-45d7-b000-e8ec646e34c8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Floyd County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '89d23abd-23bb-4ae6-b36f-d7722c44b824',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Stephens County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a0dad78-a528-42c3-8b97-cfac14ea5804',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Polk County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8b70464d-2f4d-4614-ab7d-44ccce32e1be',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Vietnamese',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8c60c3fc-e81e-4c6b-b750-47fc5ff1bc9f',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Law Enforcement',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '8cc8c520-2e9e-43ae-9975-5dca6a2465a3',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '27e17fa3-3666-444a-8402-1159e02cafee',
    ),
  );
  $terms[] = array(
    'name' => 'Wilbarger County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8d1e95c7-5582-47a0-9699-91a63866050f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Webb County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8ead918c-6284-4a3b-b985-640c001ae57a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Nolan County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8ef504a6-710a-479a-a836-cb6d5d267b55',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Criminal',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8efb8840-85a3-435a-87cd-51cbd1cf8d86',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Hansford County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f1a68e0-d2cd-49fe-8d58-ea8cfab4b262',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Moore County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f34f2c0-9449-4378-8f71-630b32313734',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Blanco County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '907c4346-74e1-4312-b283-fc66f38556b9',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'DeWitt County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '90d3f4ff-321a-4b7d-8b15-8e707d6dca3a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Other Family',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '913d6ac0-f579-49af-ba30-67d033e8efc0',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Oldham County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '91b401cc-4f26-4a18-bbe2-47f4c30bccb6',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'San Patricio County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '923d2802-3d01-418b-b3e2-c45f93a4f0c7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Cooke County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '927d154e-37bc-49a6-85a6-5826d824c9ce',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Everyone',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '92a5c6d2-d0af-47a6-b4f7-83c2f409ec6e',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Veterans',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 19,
    'uuid' => '941f3af0-3bf4-4512-8357-318614893ab0',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Adjustment of Status',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '94edb481-f532-4e99-82c6-4b5292b58b90',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'T-Visa',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '950d93ca-fdc9-4868-822b-423d5180b473',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'McCulloch County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '976a9115-11c3-414f-8fc1-0a5e55c7b15f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bosque County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '978ba8e4-dd3c-47d3-8644-8f5444c78097',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Parental Termination',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '994d0b9b-870b-4ea4-8f66-cd2353cba828',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Medicaid',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '99aab913-680b-4974-bc7f-5e1e84059f89',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Waller County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '99ee972e-e1fd-4b57-a3c5-4286590b6083',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Long-Term Health Facilities',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '9a61f085-db4e-49a4-b33b-be01c5a523c2',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '0f04ea6e-5021-4335-a07a-9068e23ef2bf',
    ),
  );
  $terms[] = array(
    'name' => 'Motley County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9be6195e-2e4a-4951-9b17-9a2cf6c30b05',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Jack County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9bf739a0-79a6-4c6c-b864-fc4dcb8ff13d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Mental Health',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9c6e0856-509f-46c0-8d7d-8ded3f2ce36e',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '614615f2-0afc-453a-807c-371ed1a48e39',
    ),
  );
  $terms[] = array(
    'name' => 'SIJS',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '9c88a86a-f4c1-4eb3-ab73-648d9e0def67',
    'vocabulary_machine_name' => 'legal_services',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Hindi',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '9cca11f7-5dca-4329-804e-829760d8c6ba',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Unfair/Deceptive Sales Practices',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '9d14e2c8-0be1-45c0-a532-cb5128fc945a',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'Access',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '9d263eaa-76cf-4bd3-bfe9-c7b658bc96bf',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'bad10063-99a2-45c2-8766-928fccff8cb8',
    ),
  );
  $terms[] = array(
    'name' => 'DAPA',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '9d96f64d-1d09-462d-b060-0357e23d370c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Harrison County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9e94074d-4a35-4591-964e-57bc8e5916fa',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Name Change',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'a0ce6b20-9603-4d76-b1c6-555cc23709b3',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment Compensation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'a164cc1d-7c16-4752-a4f7-6d32a7594b31',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    ),
  );
  $terms[] = array(
    'name' => 'Stonewall County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a1b50b48-b18c-4336-a8be-2368f34c67cc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Chambers County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a4828714-df05-49e6-bb2f-ba2a19bfd5fb',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Minor/Guardianship',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'a4a916d1-5b6d-404d-bb27-fea3fd21b46c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '56ec5a3a-4694-42ca-b774-a7716a8b2e89',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'a667eee3-3b47-4a4c-8319-e75408b33335',
    'vocabulary_machine_name' => 'language_service_method',
  );
  $terms[] = array(
    'name' => 'Child Support',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a6cd7d84-af08-4292-b2c3-459f547ac016',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    ),
  );
  $terms[] = array(
    'name' => 'On-line',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'a70ee639-085d-46f5-8bbc-59aa142a7d1f',
    'vocabulary_machine_name' => 'intake_method',
  );
  $terms[] = array(
    'name' => 'Austin County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a79c1543-7a08-4f4a-b1a0-6a30c11d8f2d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Live Oak County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a85ae5fc-d996-4b80-96b2-f66aaa6bf65a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'In-person',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a8f9d803-acc6-48cf-a3be-fc239d02dc02',
    'vocabulary_machine_name' => 'intake_method',
  );
  $terms[] = array(
    'name' => 'Somervell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ab4de4d6-7aff-482f-b68e-c9dd34d61b9a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Young County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ab62bbdd-e40c-464f-98d2-9c2578f8e303',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Parker County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ab92be0b-7951-4e3f-a6e7-ee6178c344bf',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Injured Spouse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'abe89c90-3b82-4a2e-8323-b9c17f1c2ad5',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    ),
  );
  $terms[] = array(
    'name' => 'Jefferson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ac8be203-e133-4f4d-80ef-cf524e628898',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Lamb County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'acc4871e-f262-44c0-a0fd-9942a6534d46',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Counseling',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'ad3943b0-ebab-4730-854e-adfafeabcf7d',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Jim Wells County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ad9a1954-2334-4b62-97b0-e1060b49d60d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Archer County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'adf2fbe8-588d-4f98-909e-3e6e1a3b61bd',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Mitchell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b0e0bf3d-6966-47bd-9338-9fbfcf149478',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Edwards County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b0f7639d-4838-4809-9740-64c63c13a7c7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Brazoria County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b14a357b-bc1a-4300-b244-d4c07d61851b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Throckmorton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b1b110dc-b6fb-43bc-a88c-0e96c31f2f0d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Legal Clinics',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'b2827870-2aaf-4a82-a844-82baec3967c2',
    'vocabulary_machine_name' => 'direct_services',
  );
  $terms[] = array(
    'name' => 'Concho County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b29ac69d-09cf-4756-8b3b-cdbee1541c39',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Gaines County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b35e0466-db41-4887-a884-719d7b7f5882',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => 'b42ca8a9-a68e-491b-acec-0da6393f48f3',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Presidio County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b4c43ff7-ba7c-42b5-8726-77162c888769',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Ector County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b556d85f-6830-4dcf-b9d1-1e96b7c53199',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Terry County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b55a2693-1c53-469d-b63f-09c88e02e1a9',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Kerr County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b58652fe-722b-4b80-9027-aefe5f282dca',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Sterling County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b63beabe-0ecb-40d8-b071-dd78d4ffdcf4',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'McLennan County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b70208c9-3e62-4e0a-a465-24be07257bb7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Spanish',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'b8f517e0-4ffd-4447-a90c-45e3e6e6dd07',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Low-Cost',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'b9af793b-9c02-4c7c-a342-6636312e67fd',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '2007779c-1a8a-4254-86ea-ba9daca8270c',
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'bad10063-99a2-45c2-8766-928fccff8cb8',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Hardin County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bcb95945-4ace-462a-b34c-bea07db67f90',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => 'bd9b67b7-b435-40bd-b545-2c21599644b1',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Job Placement Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'beb60e31-1c3d-4970-ac67-1e0a58a0fa6b',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Newton County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bfffc6d3-6790-4827-bc2a-57f93c00029d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Eastland County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c048919a-f72d-497d-8434-5d77e3596dcd',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Caldwell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c0b38ae7-6eff-40e8-b534-d671784f072b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Veterans',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'c1e114d0-ed81-4d0b-ac21-ca64bb6cfa49',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Substance Abuse Treatment',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => 'c1f20358-ba17-4310-9490-81ae6c9090d1',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Lamar County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c248eec9-e2e1-42d6-94a8-7608729d37a1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Homeownership',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'c279b2a4-f0fc-48d2-8b9c-e9a47cf290bc',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    ),
  );
  $terms[] = array(
    'name' => 'Bee County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c49386b4-6d27-4582-95b7-a665235c30a8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Delta County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c4e4980b-7b5d-4cbb-a162-ad8a2b49e8e5',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Tax',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 17,
    'uuid' => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Sexual Assault Victims',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'c6a1510b-427f-47be-ba8c-32e29924b1da',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Terrell County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c6f1c57e-721d-4c67-b9fa-8aae2860e607',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Representation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'c6fcf3dc-0222-4220-924e-2321123f7e8e',
    'vocabulary_machine_name' => 'direct_services',
  );
  $terms[] = array(
    'name' => 'Grayson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c770f116-5558-4cb7-a8a2-431769614cb1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hockley County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c81fbe78-2b47-4feb-833e-c1cfbdb17629',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hudspeth County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ca63fb4a-bf67-48d1-b259-03311f1e0221',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'San Jacinto County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'caa2eedb-377f-4a52-8804-68f43f47d062',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Family',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'cb7d486c-7e98-42ed-a977-79a3edc1edc6',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Potter County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cbac5a09-9403-455a-b768-e727896c5d39',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Gillespie County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cc1bfd6a-2b90-42df-933d-e2622f210402',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Taylor County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cde80fec-b5f6-4a35-8572-2ccda2ed9ab6',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Disability',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'cdfaee92-a5ad-4168-a794-498a8d87034b',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '614615f2-0afc-453a-807c-371ed1a48e39',
    ),
  );
  $terms[] = array(
    'name' => 'Innocent Spouse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'ce0088b7-73f8-451b-81d7-dcf26fd2b50e',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'c53a9231-d215-4ab4-9877-121a30f4dbdb',
    ),
  );
  $terms[] = array(
    'name' => 'Phone',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'ced81cf3-e27a-4e85-9a7b-476b95f7519d',
    'vocabulary_machine_name' => 'intake_method',
  );
  $terms[] = array(
    'name' => 'Red River County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf86639d-a02e-4ae0-9ff6-e5bad0c22677',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Washington County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd0442b8d-cd62-463f-9182-8591275d40b2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Domestic Violence Victims',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'd2079d81-5039-40e2-9af6-9350cc42f12d',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Falls County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd2f1a109-db89-44a9-9b63-4c2b3afaee2a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Uvalde County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd39d04fb-e69e-4bc7-bc76-723d6a15dd50',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Kinney County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd468d724-cf15-4a93-b9d3-436553adfbdc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Karnes County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd6a2b1f7-142e-4d85-aeea-6a792ad731be',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Trinity County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd71402d9-16e7-4246-b07e-65ac756f2069',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Fayette County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd768a694-dadb-47ea-8daf-7bdb4b2ff073',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Palo Pinto County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd8f809cc-526c-43f6-a3f7-c48f24986078',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Knox County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd98c0530-4101-476a-9c33-0e52f89f5491',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'VAWA Self-Petition',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'da2e8f4d-acad-4308-a462-73bd8da0e30a',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '3d85dd10-58fd-4e28-a40a-7d58e1310fff',
    ),
  );
  $terms[] = array(
    'name' => 'Lee County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'daaa1b3a-f930-47cb-a1a3-ea022c72791f',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Anderson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'db549916-e255-463c-b64f-d536864e4ba0',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Intestate',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dc1dee5e-401d-4c83-829a-81776785a188',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1ad7b664-a24b-4ea3-9c79-32d49a17eec7',
    ),
  );
  $terms[] = array(
    'name' => 'Ward County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dc4ad109-d80e-4b00-be6d-54647675209c',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Howard County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dc60079b-9372-43d8-92f0-fafa703a04f7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Cameron County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dc8ef453-abd5-41d5-a50c-2dcc7d4ddc1d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Gray County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dd7e0b4a-b8b8-4fa7-a927-4ce6de970ca1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hopkins County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dddedd45-c7ad-408a-be12-3b9f9d521983',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Zapata County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ddfa9aba-95eb-4f23-bec2-131123eec81b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'English',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'de570537-0c4b-4a7e-894e-3c9eebafab6e',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Williamson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dfc80292-57dc-4579-acb7-8f37a8e474f8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Benefits',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e02d2484-be9f-4d31-9589-8562dbf296be',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '941f3af0-3bf4-4512-8357-318614893ab0',
    ),
  );
  $terms[] = array(
    'name' => 'Trafficking Victims',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'e0d9f4b3-f2cf-455d-860b-3dc553723761',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Ochiltree County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e124f7a4-299b-4ccf-bf9b-51569affdb2d',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Dickens County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e1498815-ccf2-46c5-811e-f11f2fab656c',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bexar County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e19d59af-365f-4711-984e-07b40251a2f5',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Limestone County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e321451d-675d-4279-8ca8-b201da7a9cf7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Professional',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'e339cd28-c04c-48ac-ae18-72ab7d2c8a86',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '73579fa6-f082-4a2c-a637-e67b565ea358',
    ),
  );
  $terms[] = array(
    'name' => 'Minors',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'e45d39c4-da89-492d-9f63-550b959e1c7e',
    'vocabulary_machine_name' => 'population_served',
  );
  $terms[] = array(
    'name' => 'Tarrant County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e4c89b86-0b65-4d18-b548-37bbeced6ae4',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Financial Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'e566ddb9-a674-4535-b21e-a853ca64eec7',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Public Housing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e57ac4eb-09eb-41b4-bb8c-f4805a92b04c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    ),
  );
  $terms[] = array(
    'name' => 'Calhoun County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e67b169b-c809-49c9-8c14-adc7d8b2ee15',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Assisted Pro Se Services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'e6863779-1d59-4db9-91ab-fdc23aef9f7c',
    'vocabulary_machine_name' => 'direct_services',
  );
  $terms[] = array(
    'name' => 'Housing Discrimination',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'e709bdce-766a-4526-9336-7be4160395d8',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '09fc1f64-0927-460a-a4ae-f093b21c0e63',
    ),
  );
  $terms[] = array(
    'name' => 'Hill County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e70cb8bd-49f9-40b3-9bc7-7ccaed19afb1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Brooks County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e9bcbdee-d96e-4a3f-976f-8b999864286b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Smith County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea2dfa66-9018-4a9b-9b96-e505fcd1c8a0',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Clay County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea63c030-1b65-42f9-a612-cd5e2876e0d2',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Wise County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eaa5e477-b45f-4bd8-bcd8-7dfe3af218b7',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Disaster/Emergency Assistance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'eb6c59bd-831c-4f3e-98aa-f0eef5d3fad2',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'eb83864c-da95-4f8e-93be-8aaa20a54f73',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Comal County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ebf103be-7bf2-4dc4-a207-9ac1e7103112',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Dawson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec5a2cff-2e48-4e15-862c-0c0262f436cc',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Midland County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ecf676be-d81c-476b-8043-5f88231034be',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Mason County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ed105e29-cb53-4a96-a139-9d738d66b8dd',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Dimmit County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ed1a10a6-f471-40ce-99dc-95e44d225f3e',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Bastrop County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ed1d9540-7189-4cde-83da-23af1dbeb0dd',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Income Maintenance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Crime Victim Rights',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'edf078c7-3d20-4779-878b-7551b9f5c62e',
    'vocabulary_machine_name' => 'legal_services',
  );
  $terms[] = array(
    'name' => 'Collection Practices',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'ee8e19ff-135e-499f-9120-365143578df7',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => '1b493d14-c01e-4652-87b2-3d3675379104',
    ),
  );
  $terms[] = array(
    'name' => 'SNAP',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'ef28cd38-3222-44c8-a5c6-e3b613f50e38',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    ),
  );
  $terms[] = array(
    'name' => 'Coke County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f00cc573-088f-41fa-b589-73866569673c',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Gregg County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f02dbd3b-3fe7-43d2-95d9-6111b675c4ed',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Hunt County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f112c56e-7273-4606-903e-49139aa50d27',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Social Security Supplement (SSI)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f1b324bb-4a95-4d80-b480-055d49e7918c',
    'vocabulary_machine_name' => 'legal_services',
    'parent' => array(
      0 => 'edbeb484-ac49-4c16-ada7-88478700cbb1',
    ),
  );
  $terms[] = array(
    'name' => 'Crockett County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f2044ba7-2735-4091-8e50-fe53907148bf',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Arabic',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'f23bf84a-31ca-4ef0-98dc-a95952085e7a',
    'vocabulary_machine_name' => 'language',
  );
  $terms[] = array(
    'name' => 'Hood County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f31526b5-7c0e-4510-8be8-cee8e27979d8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Medina County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f31b6a12-571a-4eee-90c3-88b59abc31b5',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Angelina County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f321c464-8884-42ab-9256-7cd878082e1e',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Liberty County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f3496b85-f534-4dc8-963c-e95addbed80a',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Jones County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f515abc8-b886-4e37-a28c-9070943da598',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Telephone Translating Service',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'f8679a1c-f6b5-446a-b315-4318df59d5fa',
    'vocabulary_machine_name' => 'language_service_method',
  );
  $terms[] = array(
    'name' => 'Henderson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f8e50fa2-98a8-4bbf-9eb0-e5cc6c628fdd',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Crime Victim Rights Education',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'faafa111-8b3a-4d7b-9e94-96fceb4a7015',
    'vocabulary_machine_name' => 'non_legal_services',
  );
  $terms[] = array(
    'name' => 'Shelter - Family Violence',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'fb7b712b-6195-4135-8fdb-5ac2f4fd6217',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => '2007779c-1a8a-4254-86ea-ba9daca8270c',
    ),
  );
  $terms[] = array(
    'name' => 'Brazos County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fd2638a8-0a9e-4e4c-95e3-9d418cbe9a5b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Collingsworth County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fd947caa-bc64-4ac4-8818-5c2b7a2a8f0b',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Individual',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'fe813fea-db96-4783-bda5-50ea03270805',
    'vocabulary_machine_name' => 'non_legal_services',
    'parent' => array(
      0 => 'ad3943b0-ebab-4730-854e-adfafeabcf7d',
    ),
  );
  $terms[] = array(
    'name' => 'Orange County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fefe61af-2b7d-4654-a17e-c4de4b57e8d8',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Deaf Smith County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ff5a6577-aadc-4336-abca-b520eee431f1',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Robertson County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ff9604d9-2680-415b-b30f-68169bb4781c',
    'vocabulary_machine_name' => 'county',
  );
  $terms[] = array(
    'name' => 'Refugio County',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ff9f9b13-b179-4a16-b12c-85b03043dc87',
    'vocabulary_machine_name' => 'county',
  );
  return $terms;
}
