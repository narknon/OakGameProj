#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxFlag.h"
#include "FlagPropertyTestStruct.h"
#include "FlagPropertyTestContext.generated.h"

UCLASS()
class UFlagPropertyTestContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGbxFlag TestFlag;
    
    UPROPERTY()
    FFlagPropertyTestStruct TestStruct;
    
    UFlagPropertyTestContext();
};

