#import "NSObject.h"

@class MSIOSConnectionController, MSIOSRefreshRenderer, NSMapTable, NSTimer;

@interface MSIOSRefreshCollector : NSObject
{
    NSTimer *_timer;
    NSMapTable *_dirtyRectsPerArtboard;
    MSIOSRefreshRenderer *_refreshRenderer;
    MSIOSConnectionController *_connectionController;
}

@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(retain, nonatomic) MSIOSRefreshRenderer *refreshRenderer; // @synthesize refreshRenderer=_refreshRenderer;
@property(retain, nonatomic) NSMapTable *dirtyRectsPerArtboard; // @synthesize dirtyRectsPerArtboard=_dirtyRectsPerArtboard;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (id)totalRectForArtboard:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)collectRefreshRect:(struct CGRect)arg1 onArtboard:(id)arg2;
- (void)collectRefreshRect:(struct CGRect)arg1 page:(id)arg2;
- (BOOL)shouldCollectRefreshes;
- (void)scheduleTimerWithInterval:(double)arg1;
- (void)dealloc;
- (id)init;

@end

