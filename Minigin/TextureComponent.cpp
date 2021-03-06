#include "MiniginPCH.h"
#include "TextureComponent.h"
#include "ResourceManager.h"
#include "Renderer.h"

dae::TextureComponent::~TextureComponent() = default;

void dae::TextureComponent::Update(){}

void dae::TextureComponent::Render() const
{
	const auto pos = m_Transform.GetPosition();
	Renderer::GetInstance().RenderTexture(*m_Texture, pos.x, pos.y);
}

void dae::TextureComponent::SetTexture(const std::string& filename)
{
	m_Texture = ResourceManager::GetInstance().LoadTexture(filename);
}

void dae::TextureComponent::SetPosition(float x, float y)
{
	m_Transform.SetPosition(x, y, 0.0f);
}
