#import "NSView.h"

@class MSUpDownController, NSTimer;

@interface MSIntegratedStepper : NSView
{
    BOOL _keepFiringTimer;
    MSUpDownController *_target;
    NSTimer *_timer;
    NSTimer *_initialSlowTimer;
    long long _highlightMode;
}

@property(nonatomic) BOOL keepFiringTimer; // @synthesize keepFiringTimer=_keepFiringTimer;
@property(nonatomic) long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(retain, nonatomic) NSTimer *initialSlowTimer; // @synthesize initialSlowTimer=_initialSlowTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak MSUpDownController *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)stepWithEvent:(id)arg1;
- (void)repeatStepEvent:(id)arg1;
- (id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2;
- (void)mouseDown:(id)arg1;

@end

