//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCRangeMap;

@interface MSConstantBaselineTypesettingSupport : NSObject
{
    BOOL _useLegacyCustomBaseline;
    BCRangeMap *_rangeMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCRangeMap *rangeMap; // @synthesize rangeMap=_rangeMap;
@property(nonatomic) BOOL useLegacyCustomBaseline; // @synthesize useLegacyCustomBaseline=_useLegacyCustomBaseline;
- (double)lineHeightForFont:(id)arg1;
- (double)baselineOffsetForGlyphRange:(struct _NSRange)arg1 withDefault:(double)arg2;
- (void)willSetLineFragmentRect:(inout struct CGRect *)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(inout struct CGRect *)arg3 baselineOffset:(double *)arg4;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2 paragraphRange:(struct _NSRange)arg3 paragraphStyle:(id)arg4 attributedString:(id)arg5 layoutManager:(id)arg6 defaultParagraphSpacing:(double)arg7;
- (id)maxLineHeightFontForParagraphRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 attributedString:(id)arg3 minParagraphHeight:(double *)arg4 maxLineHeight:(double *)arg5 characterRange:(struct _NSRange *)arg6;
- (void)invalidateLayoutFromGlyphLocation:(unsigned long long)arg1;
- (struct _NSRange)constantBaselineGlyphRangeForGlyphLocation:(unsigned long long)arg1;
- (id)init;

@end

