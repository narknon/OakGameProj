#pragma once
#include "CoreMinimal.h"
#include "GestaltPartData.h"
#include "GestaltChildPartData.h"
#include "GestaltPartFoleyAccessory.h"
#include "GestaltPartData_Mesh.generated.h"

class UGestaltData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGestaltPartData_Mesh : public UGestaltPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    UGestaltData* GestaltData;
    
    UPROPERTY(EditInstanceOnly)
    FName GestaltMeshPartName;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FName> AdditionalGestaltMeshPartNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FGestaltChildPartData> ChildParts;
    
public:
    UPROPERTY(EditInstanceOnly)
    FGestaltPartFoleyAccessory FoleyAudioAccessory;
    
    UGestaltPartData_Mesh();
private:
    UFUNCTION()
    void EnumerateGestaltMeshPartNames(TArray<FName>& OutPartNameList) const;
    
};

