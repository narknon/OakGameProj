#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GbxActionRegister.h"
#include "StretchBonesBlueprintLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UStretchBonesBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStretchBonesBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> SetStretchBonesTarget(UPARAM(Ref) TArray<FGbxActionRegister>& GbxActionRegisters, AActor* TargetActor, FVector TargetPosition);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> SetStretchBonesDistance(UPARAM(Ref) TArray<FGbxActionRegister>& GbxActionRegisters, float Distance);
    
};

