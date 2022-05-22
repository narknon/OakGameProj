#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CohtmlTextureAtlasDetails.generated.h"

UCLASS()
class COHTMLPLUGIN_API UCohtmlTextureAtlasDetails : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString AtlasPath;
    
    UPROPERTY(VisibleAnywhere)
    int32 Width;
    
    UPROPERTY(VisibleAnywhere)
    int32 Height;
    
    UPROPERTY(VisibleAnywhere)
    FString PixelFormat;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAtlasWidth;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAtlasHeight;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTextureWidth;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTextureHeight;
    
    UCohtmlTextureAtlasDetails();
};

