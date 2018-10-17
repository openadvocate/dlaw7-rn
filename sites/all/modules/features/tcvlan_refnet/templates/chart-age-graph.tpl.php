<?php
// Remember how many time the chart was called to make unique ids.
$count = &drupal_static('tcvlan_chart_template');
$count++;
?>

<canvas id="canvas-age-graph-<?= $count ?>" style="display: none;" width="578" height="200"></canvas>
<canvas id="chart-activity-<?= $count ?>" width="400" height="121" style="display: block; width: 400px; height: 121px;"></canvas>

<script>
  var canvas = document.getElementById('canvas-age-graph-<?= $count ?>');
  var context = canvas.getContext('2d');
  context.rect(0, 0, canvas.width, canvas.height);
  // add linear gradient
  var grd = context.createLinearGradient(0, 0, canvas.width, 0);
  // light blue
  grd.addColorStop(0, '#ff6384');
  grd.addColorStop(0.4, '#36a2eb');
  // dark blue
  grd.addColorStop(1, '#5fba7d');
  context.fillStyle = grd;
  context.fill();

  new Chart("chart-activity-<?= $count ?>", {
    type: 'line',
    data: {
      labels: [ <?= join(', ', array_keys($vars['data'])) ?> ],
      datasets: [
        {
          label: "",
          fill: true,
          lineTension: 0.2,
          backgroundColor: grd,
          borderColor: grd,
          pointHoverRadius: 5,
          pointHoverBorderWidth: 2,
          pointRadius: 1,
          pointHitRadius: 10,
          data: [ <?= join(', ', $vars['data']) ?>],
          spanGaps: false,
        },
      ]
    },
    options: {
      legend:{
        display: false
      },
      scales: {
        yAxes: [{
          position: "left",
          "id": "y-axis-0"
        }]
      }
    }
  });
</script>
