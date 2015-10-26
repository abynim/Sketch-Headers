#import "CHViewController.h"

#import "MSInspectorChildController.h"
#import "MSStylePartInspectorDelegate.h"

@class MSBlurInspectorViewController, MSColorControlsInspectorViewController, MSEventHandler, MSExportInspectorViewController, MSInspectorStackView, MSLayerInspectorViewController, MSMultipleBorderInspectorViewController, MSMultipleFillInspectorViewController, MSMultipleShadowInspectorViewController, MSReflectionInspectorViewController, NSArray, NSString;

@interface MSNormalInspector : CHViewController <MSStylePartInspectorDelegate, MSInspectorChildController>
{
    MSLayerInspectorViewController *layerViewController;
    MSMultipleShadowInspectorViewController *shadowViewController;
    MSMultipleShadowInspectorViewController *innerShadowViewController;
    MSMultipleBorderInspectorViewController *borderViewController;
    MSBlurInspectorViewController *blurViewController;
    MSColorControlsInspectorViewController *colorControlsViewController;
    MSReflectionInspectorViewController *reflectionViewController;
    MSMultipleFillInspectorViewController *fillViewController;
    MSExportInspectorViewController *exportViewController;
    MSInspectorStackView *_stackView;
    NSArray *_layers;
    MSEventHandler *_eventHandler;
}

@property(retain, nonatomic) MSEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) MSInspectorStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (void)startRenamingSharedObject:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (void)returnToDefaultHandler;
- (void)refreshLayers;
- (BOOL)layersHaveArtisticStroke;
- (void)dealloc;
- (id)viewControllers;
- (void)changeColor:(id)arg1;
- (void)layerPositionPossiblyChanged;
- (void)prepareViewControllers;
- (void)prepareForDisplay;
- (void)selectionDidChangeTo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

