//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSValue;

@interface MSInlineTextLabelImageCell : NSTextFieldCell
{
    NSValue *_customFittingSize;
}

+ (id)inlineTextLabelFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *customFittingSize; // @synthesize customFittingSize=_customFittingSize;
- (id)font;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (void)setImage:(id)arg1;

@end

