#pragma once
#include "IComponent.h"

/// <summary>
/// Showcases a very simple behaviour that rotates the parent gameobject at a fixed rate over time
/// </summary>
class RotatingBehaviour : public Gameplay::IComponent {
public:
	typedef std::shared_ptr<RotatingBehaviour> Sptr;

	RotatingBehaviour() = default;
	glm::vec3 RotationSpeed = glm::vec3(0.0f, 0.0f, 90.0f);

	virtual void Update(float deltaTime) override;

	virtual void RenderImGui() override;

	virtual nlohmann::json ToJson() const override;
	static RotatingBehaviour::Sptr FromJson(const nlohmann::json& data);

	MAKE_TYPENAME(RotatingBehaviour);
};

