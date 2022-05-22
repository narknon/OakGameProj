#pragma once
#include "CoreMinimal.h"
#include "PawnAttachmentQueryResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PawnAttachmentFunctionLibrary.generated.h"

class AActor;
class APawn;
class UPawnAttachSlotComponent;

UCLASS(BlueprintType)
class UPawnAttachmentFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPawnAttachmentFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void RequestDetachPawnFromSlot(AActor* Actor, FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    static void RequestDetachPawnFromActor(APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static FPawnAttachmentQueryResult QueryPawnAttachment(APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static UPawnAttachSlotComponent* FindPawnAttachSlotComponent(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void DetachPawnFromSlot(AActor* Actor, FName SlotName, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static void DetachPawnFromActor(APawn* Pawn, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static void AttachPawnToSlot(AActor* Actor, FName SlotName, APawn* Pawn, bool bInstant);
    
};

