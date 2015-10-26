#import "CHViewController.h"

#import "MSSectionProtocol.h"

@class NSArray, NSString;

@interface MSLayerSection : CHViewController <MSSectionProtocol>
{
    NSArray *_layers;
}

@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)views;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

