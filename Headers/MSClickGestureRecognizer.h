//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSGestureRecognizer.h>

@interface MSClickGestureRecognizer : MSGestureRecognizer
{
    struct CGPoint _location;
    BOOL _isDrag;
    unsigned long long _buttonMask;
    unsigned long long _modifiers;
    long long _numberOfClicksRequired;
}

@property(nonatomic) BOOL isDrag; // @synthesize isDrag=_isDrag;
@property(nonatomic) long long numberOfClicksRequired; // @synthesize numberOfClicksRequired=_numberOfClicksRequired;
@property(nonatomic) unsigned long long modifiers; // @synthesize modifiers=_modifiers;
@property(nonatomic) unsigned long long buttonMask; // @synthesize buttonMask=_buttonMask;
- (BOOL)shouldRecognizeMouseUpEvent:(id)arg1;
- (void)mouseUp:(id)arg1 location:(struct CGPoint)arg2;
- (void)mouseDragged:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 modifierFlags:(unsigned long long)arg3;
- (void)setLocation:(struct CGPoint)arg1;
- (struct CGPoint)locationInLayer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

