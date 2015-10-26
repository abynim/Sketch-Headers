#import "NSViewController.h"

#import "MSSectionProtocol.h"

@class MSEventHandler, NSString;

@interface MSEventHandlerSection : NSViewController <MSSectionProtocol>
{
    MSEventHandler *_handler;
}

@property(retain, nonatomic) MSEventHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)views;
@property(readonly, nonatomic) __weak id <MSBasicDelegate> delegate; // @dynamic delegate;
- (id)nibNameForHandler:(id)arg1;
- (id)initWithHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

