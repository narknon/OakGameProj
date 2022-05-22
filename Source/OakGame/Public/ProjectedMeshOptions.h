#pragma once
#include "CoreMinimal.h"
#include "EProjectedMeshShape.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ProjectedMeshOptions.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FProjectedMeshOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EProjectedMeshShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Scale2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumRings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGenerateUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushAwayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> AdditionalIgnoredActors;
    
    OAKGAME_API FProjectedMeshOptions();
};

