#include "../Memory.h"
#include "Visuals.h"

void Visuals::glow()
{
    for (int index = 0; index < memory.glowObjectManager->m_GlowObjectDefinitions.m_Size; index++) {
        GlowObjectDefinition_t& glowobject = memory.glowObjectManager->m_GlowObjectDefinitions[index];

        if (memory.glowObjectManager->m_GlowObjectDefinitions.m_pElements->IsUnused())
            continue;

        BaseEntity* entity = glowobject.m_pEntity;

        if (entity->GetClientClass()->m_ClassID != ClassId_CCSPlayer) // || entity->IsDormant())
            continue;
            //entity->setShouldGlow(true);

        glowobject.m_flRed = 0.0f;
        glowobject.m_flGreen = 0.0f;
        glowobject.m_flBlue = 255.0f;
        glowobject.m_flAlpha = 1.0f;
        glowobject.m_bRenderWhenOccluded = true;
        glowobject.m_bRenderWhenUnoccluded = false;
        glowobject.m_nGlowStyle = 0;
        glowobject.m_bFullBloomRender = false;
        glowobject.m_nFullBloomStencilTestValue = 0;
        glowobject.m_flBloomAmount = 0.5f;
    }
}
