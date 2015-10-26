#import "NSObject.h"

#import "ECLogManagerDelegate.h"

@class NSString;

@interface ECLogManagerMacUISupport : NSObject <ECLogManagerDelegate>
{
}

- (void)revealApplicationSupport:(id)arg1;
- (void)assertNow:(id)arg1;
- (void)crashNow:(id)arg1;
- (void)handleBackgroundOrQuitting:(id)arg1;
- (void)logManagerWillShutdown:(id)arg1;
- (void)logManagerDidStartup:(id)arg1;
- (id)installDebugSubmenuWithTitle:(id)arg1 class:(Class)arg2;
- (id)debugMenuItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

