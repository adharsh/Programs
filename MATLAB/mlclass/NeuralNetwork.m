clear ; close all; clc

inputLayerSize  = 400; 
hiddenLayerSize = 25;
kLabels = 10;           

fprintf('Loading Data...\n');

load('dataCOPY.mat');

m = size(X, 1);

% randomly selects 100 data points to display
sel = randperm(size(X, 1));
sel = sel(1:100);

displayData(X(sel, :));

size(X(sel,:));

fprintf('Program paused. Press enter to continue.\n\n');
pause;

fprintf('Initializing Neural Network Parameters ...\n')

%Theta1 = randInitializeWeights(inputLayerSize, hiddenLayerSize);
%size(initTheta1)
%Theta2 = randInitializeWeights(hiddenLayerSize, kLabels);
%size(initTheta2)
pause;
%initial_nn_params = [initTheta1(:) ; initTheta2(:)];

fprintf('Program paused. Press enter to continue.\n\n');
pause;

fprintf('Training Neural Network ...\n')

lambda = 100;

for n=1:100
	[Jcost Theta1 Theta2] = nnCostFunction( Theta1, Theta2, inputLayerSize, hiddenLayerSize, kLabels, X, y, lambda);

	fprintf('Iteration\t%d | Cost: %f\n', n, Jcost);
end

% Theta1 = reshape(nn_params(1:hiddenLayerSize * (inputLayerSize + 1)), hiddenLayerSize, (inputLayerSize + 1));

% Theta2 = reshape(nn_params((1 + (hiddenLayerSize * (inputLayerSize + 1))):end), kLabels, (hiddenLayerSize + 1));

fprintf('Program paused. Press enter to continue.\n');
pause;

fprintf('\nVisualizing Hidden Layer of Neural Network... \n')

displayData(Theta1(:, 2:end));

fprintf('\nProgram paused. Press enter to continue.\n');
pause;

pred = predict(Theta1, Theta2, X);

fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y)) * 100);

rp = randperm(m);
i = 1;
for abc = 1:5000
	fprintf('\nDisplaying Example Image\n');
	displayData(X(i, :));
	pred = predict(Theta1, Theta2, X(i,:));
	fprintf('\nNeural Network Prediction: %d ', mod(pred,10));
	fprintf('\nActual: %d ', mod(y(i),10));
	fprintf('Program paused. Press enter to continue.\n');
	i = i + 100;
	pause;

end
