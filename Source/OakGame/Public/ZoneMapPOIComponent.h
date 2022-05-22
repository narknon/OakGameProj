#pragma once
#include "CoreMinimal.h"
#include "Components/MaterialBillboardComponent.h"
#include "ZoneMapPOIIconInterface.h"
#include "ZoneMapPOIComponent.generated.h"

class AZoneMapViewer;
class UPawnAttachSlotComponent;
class UTexture2D;
class UMaterialInstanceDynamic;
class AActor;
class UOakMinimapIconComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UZoneMapPOIComponent : public UMaterialBillboardComponent, public IZoneMapPOIIconInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TextureParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialLocationParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialMiniMapActiveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IconZOffset;
    
    UPROPERTY(EditAnywhere)
    bool bCullOutsideMiniMap;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* SpriteMaterial;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> AssociatedActor;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsKnown;
    
    UPROPERTY(Transient)
    AZoneMapViewer* ZoneMap;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOakMinimapIconComponent* MapIconComponent;
    
    UZoneMapPOIComponent();
    UFUNCTION(BlueprintNativeEvent)
    void ViewModeChanged();
    
    UFUNCTION(BlueprintCallable)
    void SetupSpriteMaterial(UMaterialInstanceDynamic* InSpriteMaterial);
    
    UFUNCTION()
    void OnCharacterExitedVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnCharacterEnteringVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnCharacterDied();
    
    UFUNCTION()
    void OnAssociatedActorDestroyed(AActor* DestroyedActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

