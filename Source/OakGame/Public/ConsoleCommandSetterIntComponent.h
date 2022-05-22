#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ConsoleCommandSetterIntComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UConsoleCommandSetterIntComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bXboxOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWindows;
    
    UConsoleCommandSetterIntComponent();
};

