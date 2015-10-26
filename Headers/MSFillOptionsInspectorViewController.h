#import "CHViewController.h"

#import "BCPopoverContentController.h"

@class NSArray, NSString;

@interface MSFillOptionsInspectorViewController : CHViewController <BCPopoverContentController>
{
    NSArray *_layers;
}

@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

