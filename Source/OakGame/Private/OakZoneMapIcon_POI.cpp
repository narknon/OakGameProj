#include "OakZoneMapIcon_POI.h"

class UMaterialInstanceDynamic;
class UMaterial;
class AActor;

void AOakZoneMapIcon_POI::SetupSpriteMaterial(UMaterialInstanceDynamic* InSpriteMaterial) {
}

void AOakZoneMapIcon_POI::SetSpriteMaterial(UMaterial* NewSpriteMaterial) {
}

void AOakZoneMapIcon_POI::SetIsKnown(bool bInIsKnown) {
}

void AOakZoneMapIcon_POI::SetAssociatedActor(AActor* InAssociatedActor) {
}

bool AOakZoneMapIcon_POI::POIActivated_Implementation(FText& ErrorMessage) {
    return false;
}

void AOakZoneMapIcon_POI::OnCharacterDied() {
}

void AOakZoneMapIcon_POI::OnAssociatedActorDestroyed(AActor* DestroyedActor) {
}

void AOakZoneMapIcon_POI::GetPOIDisplayInfo_Implementation(FString& OutScaleformIconName, FText& OutPOIDisplayName, FText& OutPOISubHeading, TArray<FText>& OutPOIDescriptionText, FText& OutPOIUseText) {
}

void AOakZoneMapIcon_POI::ForceUpdateTransform() {
}

bool AOakZoneMapIcon_POI::ExitMenuWhenActivated_Implementation() {
    return false;
}

bool AOakZoneMapIcon_POI::CanPOIBeActivated_Implementation() {
    return false;
}

AOakZoneMapIcon_POI::AOakZoneMapIcon_POI() {
    this->TextureParameter = TEXT("Texture");
    this->SpriteTexture = NULL;
    this->POIType = NULL;
    this->SpriteMaterial = NULL;
    this->OpacityIfInWorldIcon = 0.00f;
    this->IconZOffset = 0.00f;
    this->bCullOutsideMiniMap = true;
    this->bIsKnown = true;
    this->bIsFogged = false;
    this->bInvisible = false;
    this->POIMeshComponent = NULL;
}

