#pragma once
#include "CoreMinimal.h"
#include "MapParameters.generated.h"

USTRUCT(BlueprintType)
struct FMapParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpecular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartIndexX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartIndexY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString OutputPattern;
    
    GBXTEST_API FMapParameters();
};

