#pragma once
#include "CoreMinimal.h"
#include "GbxLevelEditorPreviewInstanceData.h"
#include "Components/SceneComponent.h"
#include "GbxLevelEditorPreviewComponent.generated.h"

class UGbxLevelEditorPreviewDefinition;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXLEVELEDITORPREVIEW_API UGbxLevelEditorPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxLevelEditorPreviewDefinition* Definition;
    
private:
    UPROPERTY(EditAnywhere)
    FGbxLevelEditorPreviewInstanceData InstanceData;
    
    UPROPERTY(DuplicateTransient, Transient)
    FString CachedInstanceNamePrefix;
    
public:
    UGbxLevelEditorPreviewComponent();
};

