#pragma once
#include "CoreMinimal.h"
#include "ZoneMapIconBase.h"
#include "ZoneMapPOIEntry.h"
#include "OakZoneMapIcon_POI.generated.h"

class UMeshComponent;
class UTexture2D;
class UZoneMapPOITypeData;
class UMaterialInstanceDynamic;
class AActor;
class UMaterial;

UCLASS()
class OAKGAME_API AOakZoneMapIcon_POI : public AZoneMapIconBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TextureParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DefaultScaleformIconName;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FZoneMapPOIEntry POIEntry;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UZoneMapPOITypeData* POIType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* SpriteMaterial;
    
    UPROPERTY(EditAnywhere)
    FName MaterialLocationParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialFODTextureParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialFODCoordsParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialFODEnableParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialPlayerZParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialScaleMultiplierParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialOpacityParameter;
    
    UPROPERTY(EditAnywhere)
    float OpacityIfInWorldIcon;
    
    UPROPERTY(EditAnywhere)
    FName MaterialMiniMapActiveParameter;
    
    UPROPERTY(EditAnywhere)
    float IconZOffset;
    
    UPROPERTY(EditAnywhere)
    bool bCullOutsideMiniMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> AssociatedActor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsKnown;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsFogged;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bInvisible;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UMeshComponent* POIMeshComponent;
    
    AOakZoneMapIcon_POI();
    UFUNCTION(BlueprintCallable)
    void SetupSpriteMaterial(UMaterialInstanceDynamic* InSpriteMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetSpriteMaterial(UMaterial* NewSpriteMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetIsKnown(bool bInIsKnown);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedActor(AActor* InAssociatedActor);
    
    UFUNCTION(BlueprintNativeEvent)
    bool POIActivated(FText& ErrorMessage);
    
    UFUNCTION()
    void OnCharacterDied();
    
    UFUNCTION()
    void OnAssociatedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void GetPOIDisplayInfo(FString& OutScaleformIconName, FText& OutPOIDisplayName, FText& OutPOISubHeading, TArray<FText>& OutPOIDescriptionText, FText& OutPOIUseText);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateTransform();
    
    UFUNCTION(BlueprintNativeEvent)
    bool ExitMenuWhenActivated();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanPOIBeActivated();
    
};

