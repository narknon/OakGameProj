#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "OakThumbnailManagerRenderProperties.h"
#include "VendingMachineSocketLocationAndOffset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxVendingMachinePrompt.generated.h"

class UOakThumbnailManager;
class AActor;
class UGbxTextField;
class AOakPlayerController;
class AOakCharacter;
class UPlayerShopManagerComponent;
class UInventoryShopComponent;
class UCurveFloat;
class UGbxGFxObject;
class UUsableComponent;
class AVendingMachine;

UCLASS()
class OAKGAME_API UGFxVendingMachinePrompt : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FOakThumbnailManagerRenderProperties RenderPropertiesForGunThumbnail;
    
    UPROPERTY(EditAnywhere)
    FVendingMachineSocketLocationAndOffset SocketLocationAndOffset;
    
private:
    UPROPERTY(Transient)
    AOakPlayerController* CachedOakPlayerController;
    
    UPROPERTY(Transient)
    FVector2D CachedScreenSocketLocation;
    
    UPROPERTY(Transient)
    FTransform CachedOriginalTransform;
    
    UPROPERTY(Transient)
    AActor* FeaturedItemActor;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
    UPROPERTY()
    AOakCharacter* VendingMachineMenuCharacter;
    
    UPROPERTY(Export)
    UPlayerShopManagerComponent* PlayerShopManager;
    
    UPROPERTY(Export)
    UInventoryShopComponent* CurrentShopComponent;
    
    UPROPERTY(EditAnywhere)
    float VisibilityDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FText FlavorTextString;
    
    UPROPERTY(EditAnywhere)
    FText ItemOfTheDayTextString;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FString RarityContentID;
    
    UPROPERTY(EditAnywhere)
    FString TimerTextID;
    
    UPROPERTY(EditAnywhere)
    FString IODTextID;
    
    UPROPERTY(EditAnywhere)
    FString ItemScoreID;
    
    UPROPERTY(EditAnywhere)
    FString ManufacturerContentID;
    
    UPROPERTY(EditAnywhere)
    FString RarityTextID;
    
    UPROPERTY(EditAnywhere)
    FString RaysID;
    
    UPROPERTY(EditAnywhere)
    FString FlavorTextID;
    
    UPROPERTY(EditAnywhere)
    FString ElementalIconID;
    
    UPROPERTY(EditAnywhere)
    FString WeaponIconID;
    
    UPROPERTY(EditAnywhere)
    FString WeaponIconShadowID;
    
    UPROPERTY(EditAnywhere)
    FString HeadTypeID;
    
    UPROPERTY(EditAnywhere)
    FString ManufacturerIconID;
    
    UPROPERTY(EditAnywhere)
    FString ManufactrerRarityClipID;
    
    UPROPERTY(EditAnywhere)
    FString ExtRenderClipID;
    
    UPROPERTY(EditAnywhere)
    FString ExtShadowRenderClipID;
    
    UPROPERTY(EditAnywhere)
    float ViewportBaseScaleFactor;
    
    UPROPERTY(EditAnywhere)
    FText SoldOutText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ItemOfTheDayClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HeadType;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ElementalIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RarityContent;
    
    UPROPERTY(Transient)
    UGbxTextField* RarityTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Rays;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* TimerText;
    
    UPROPERTY(Transient)
    UGbxTextField* IODText;
    
    UPROPERTY(Transient)
    UGbxTextField* ItemScore;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerContent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* RarityText;
    
    UPROPERTY(Transient)
    UGbxTextField* FlavorText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponIconShadow;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerRarityClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ExtRenderClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ExtShadowRenderClip;
    
    UPROPERTY(Transient)
    UGbxTextField* SoldOutTextClip;
    
public:
    UGFxVendingMachinePrompt();
private:
    UFUNCTION()
    void UpdateWidgetLocation(FVector DistVector) const;
    
    UFUNCTION()
    FVector UpdateDistanceToVendingMachine() const;
    
    UFUNCTION()
    void RefreshIcon() const;
    
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnLookedAwayFromByPlayer(UUsableComponent* NewUsableComponent) const;
    
    UFUNCTION()
    void OnLookedAtByPlayer(UUsableComponent* NewUsableComponent) const;
    
    UFUNCTION()
    void InitSocketLocation(AVendingMachine* VendingMachine) const;
    
    UFUNCTION()
    void BuildVendingMachinePrompt(AVendingMachine* VendingMachine) const;
    
};

