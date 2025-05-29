#include "LayerStack.h"

namespace Syns {
    LayerStack::LayerStack() {
		layer_insert = layers.begin();
	}

	LayerStack::~LayerStack() {
		for (Layer* layer : layers)
			delete layer;
	}

	void LayerStack::PushLayer(Layer* layer) {
		layer_insert = layers.emplace(layer_insert, layer);
	}

	void LayerStack::PushOverlay(Layer* overlay) {
		layers.emplace_back(overlay);
	}

	void LayerStack::PopLayer(Layer* layer) {
		auto it = std::find(layers.begin(), layers.end(), layer);
		if (it != layers.end()) {
			layers.erase(it);
			layer_insert--;
		}
	}

	void LayerStack::PopOverlay(Layer* overlay) {
		auto it = std::find(layers.begin(), layers.end(), overlay);
		if (it != layers.end())
			layers.erase(it);
	}
}