#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponMaterialEffectInstance.h"
#include "EWeaponTextureMipsSetting.h"
#include "WeaponEffectAttachment.h"
#include "WeaponSkeletalControlInstance.h"
#include "WeaponTrinketAttachment.h"
#include "WeaponAttachmentSlot.generated.h"

class UTexture;
class UMeshComponent;

UCLASS(BlueprintType, EditInlineNew, Within=Weapon)
class GBXWEAPON_API UWeaponAttachmentSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UMeshComponent* Mesh;
    
    UPROPERTY(Transient)
    EWeaponTextureMipsSetting TextureMipsSetting;
    
    UPROPERTY(Transient)
    TArray<UTexture*> CachedForceMipTextures;
    
    UPROPERTY(Transient)
    TArray<FWeaponEffectAttachment> AttachmentEffects;
    
    UPROPERTY(Transient)
    TArray<FWeaponMaterialEffectInstance> ActiveMaterialEffects;
    
    UPROPERTY(Transient)
    TArray<FWeaponSkeletalControlInstance> ActiveSkeletalControls;
    
    UPROPERTY(Transient)
    TArray<FWeaponTrinketAttachment> TrinketAttachments;
    
    UPROPERTY(Export, Transient)
    TArray<UMeshComponent*> SecondaryMeshes;
    
public:
    UWeaponAttachmentSlot();
    UFUNCTION(BlueprintCallable)
    void SetMesh(UMeshComponent* InMesh);
    
};

