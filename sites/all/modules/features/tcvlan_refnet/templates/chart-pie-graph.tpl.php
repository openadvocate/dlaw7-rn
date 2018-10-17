<?php
// Remember how many time the chart was called to make unique ids.
$count = &drupal_static('tcvlan_chart_template');
$count++;
?>

<canvas id="chart-pie-graph-<?= $count ?>" width="222" height="222" style="display: block; width: 222px; height: 222px;"></canvas>

<script>
  new Chart("chart-pie-graph-<?= $count ?>", {
    type: 'pie',
    data: {
      labels: [
        "Yes",
        "No"
      ],
      datasets: [{
        data: [ <?= join(', ', $vars['data']) ?> ],
        backgroundColor: [
          'rgba(54, 235, 126, 0.5)',
          'rgba(255, 206, 86, 0.5)'
        ],
        borderColor: [
          'rgba(54, 235, 126, 1)',
          'rgba(255, 206, 86, 1)'
        ],
        borderWidth: 1
      }]
    },
    options: {
      responsive: true,
    }
  });
</script>
