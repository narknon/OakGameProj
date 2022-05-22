#include "WeaponAttachmentSlot.h"

class UMeshComponent;

void UWeaponAttachmentSlot::SetMesh(UMeshComponent* InMesh) {
}

UWeaponAttachmentSlot::UWeaponAttachmentSlot() {
    this->Mesh = NULL;
    this->TextureMipsSetting = EWeaponTextureMipsSetting::Default;
}

