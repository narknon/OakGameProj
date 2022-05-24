#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_Angle.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_Angle : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection LineA;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue LineAHeadingOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue LineAPitchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection LineB;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue LineBHeadingOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue LineBPitchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTestHeading;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTestPitch;
    
public:
    UEnvQueryTest_Angle();
};

