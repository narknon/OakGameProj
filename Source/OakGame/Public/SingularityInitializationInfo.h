#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SingularityInitializationBase.h"
#include "ESpinDirection.h"
#include "UObject/NoExportTypes.h"
#include "SingularityInitializationInfo.generated.h"

class UParticleSystem;
class UDamageSource;

USTRUCT(BlueprintType)
struct FSingularityInitializationInfo : public FSingularityInitializationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForcePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpinDirection SpinDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpinMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpinMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpinHorizontalScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpinVerticalScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttachToOwnerRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPersistantComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* SingularityParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseDestructibleChunkMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageSource> SingularitySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFalloffScalar;
    
    OAKGAME_API FSingularityInitializationInfo();
};

