#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlashTextureRescale.h"
#include "ScaleformTextureReference.h"
#include "FlashNativeBindingInfo.h"
#include "SwfMovie.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class USwfMovie : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseGFxExport: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOptimizeForMobiles: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSetSRGBOnImportedTextures: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPackTextures: 1;
    
    UPROPERTY(EditAnywhere)
    int32 PackTextureSize;
    
    UPROPERTY(EditAnywhere)
    uint8 bArePackedTextures4k: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceSquarePacking: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<FlashTextureRescale> TextureRescale;
    
    UPROPERTY(EditAnywhere)
    FString TextureFormat;
    
    UPROPERTY(EditAnywhere)
    uint8 bReplaceImages: 1;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FString SourceFile;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseOrderedLoading: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoadImageFiles: 1;
    
    UPROPERTY(EditAnywhere)
    int32 TextureLoadPriority;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> FontMappings;
    
    UPROPERTY(VisibleAnywhere)
    FString SourceFileTimestamp;
    
    UPROPERTY(Transient)
    uint64 ImportTimeStamp;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> RawData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UObject*> ReferencedAssets;
    
    UPROPERTY(EditAnywhere)
    TArray<FScaleformTextureReference> SoftReferencedTextures;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    TArray<FFlashNativeBindingInfo> InstanceNameAndPathBindings;
    
    UPROPERTY(Transient)
    TArray<FFlashNativeBindingInfo> TransientInstanceNameAndPathBindings;
    
public:
    USwfMovie();
};

