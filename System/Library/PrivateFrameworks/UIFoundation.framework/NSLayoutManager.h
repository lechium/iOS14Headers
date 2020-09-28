/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, NSStorage, NSRunStorage, NSTextContainer, NSFont, NSParagraphArbitrator, CUIStyleEffectConfiguration, NSArray;

@interface NSLayoutManager : NSObject <NSSecureCoding> {

	NSTextStorage* _textStorage;
	NSGlyphGenerator* _glyphGenerator;
	NSTypesetter* _typesetter;
	NSMutableArray* _textContainers;
	NSStorage* _containerUsedRects;
	NSRunStorage* _containerRuns;
	NSTextContainer* _extraLineFragmentContainer;
	struct {
		unsigned containersAreFull : 1;
		unsigned glyphsMightDrawOutsideLines : 1;
		unsigned backgroundLayoutEnabled : 1;
		unsigned resizingInProgress : 1;
		unsigned allowScreenFonts : 1;
		unsigned cachedRectArrayInUse : 1;
		unsigned displayInvalidationInProgress : 1;
		unsigned insertionPointNeedsUpdate : 1;
		unsigned layoutManagerInDirtyList : 1;
		unsigned originalFontOverride : 1;
		unsigned showInvisibleCharacters : 1;
		unsigned showControlCharacters : 1;
		unsigned delegateRespondsToDidInvalidate : 1;
		unsigned delegateRespondsToDidComplete : 1;
		unsigned glyphFormat : 2;
		unsigned textStorageRespondsToIsEditing : 1;
		unsigned notifyEditedInProgress : 1;
		unsigned containersChanged : 1;
		unsigned isGeneratingGlyphs : 1;
		unsigned hasNonGeneratedGlyphData : 1;
		unsigned syncAlignmentToDirection : 1;
		unsigned defaultAttachmentScaling : 2;
		unsigned usesFontLeading : 1;
		unsigned seenRightToLeft : 1;
		unsigned ignoresViewTransformations : 1;
		unsigned needToFlushGlyph : 1;
		unsigned flipsIfNeeded : 1;
		unsigned allowNonContig : 1;
		unsigned useNonContig : 1;
		unsigned inBackgroundLayout : 1;
	}  _lmFlags;
	id _delegate;
	unsigned short _textViewResizeDisableStack;
	unsigned short _displayInvalidationDisableStack;
	NSRange _deferredDisplayCharRange;
	id _firstTextView;
	CGRect* _cachedRectArray;
	unsigned long long _cachedRectArrayCapacity;
	char* _glyphBuffer;
	unsigned long long _glyphBufferSize;
	NSRange _cachedLocationNominalGlyphRange;
	unsigned long long _cachedLocationGlyphIndex;
	CGPoint _cachedLocation;
	NSRange _cachedFontCharRange;
	NSFont* _cachedFont;
	unsigned long long _firstUnlaidGlyphIndex;
	unsigned long long _firstUnlaidCharIndex;
	NSRange _newlyFilledGlyphRange;
	id _extraData;
	NSTextContainer* _cachedTextContainer;
	BOOL _cachedTextContainerIsVertical;
	BOOL _delegateIsWeakValue;

}

@property (assign) BOOL allowsOriginalFontMetricsOverride; 
@property (retain) NSParagraphArbitrator * paragraphArbitrator; 
@property (copy) CUIStyleEffectConfiguration * styleEffectConfiguration; 
@property (getter=isScrolling,readonly) BOOL scrolling; 
@property (assign,nonatomic) NSTextStorage * textStorage; 
@property (nonatomic,readonly) NSArray * textContainers; 
@property (assign,nonatomic,__weak) id<NSLayoutManagerDelegate> delegate; 
@property (assign,nonatomic) BOOL showsInvisibleCharacters; 
@property (assign,nonatomic) BOOL showsControlCharacters; 
@property (assign,nonatomic) BOOL usesFontLeading; 
@property (assign,nonatomic) BOOL allowsNonContiguousLayout; 
@property (nonatomic,readonly) BOOL hasNonContiguousLayout; 
@property (assign) BOOL limitsLayoutForSuspiciousContents; 
@property (assign) BOOL usesDefaultHyphenation; 
@property (nonatomic,readonly) unsigned long long numberOfGlyphs; 
@property (nonatomic,readonly) CGRect extraLineFragmentRect; 
@property (nonatomic,readonly) CGRect extraLineFragmentUsedRect; 
@property (nonatomic,readonly) NSTextContainer * extraLineFragmentTextContainer; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)_showsControlCharacters;
+(BOOL)_showsInvisibleCharacters;
+(BOOL)_inBackgroundLayout;
+(BOOL)_ignoresViewTransformations;
+(id)_defaultLinkAttributes;
+(BOOL)_usesScreenFonts;
+(void)_doSomeBackgroundLayout;
-(id)_commonTextInputController;
-(id)_ui_baselineCalculatorForView:(id)arg1 ;
-(BOOL)usesFontLeading;
-(unsigned long long)layoutOptions;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(double)arg4 ;
-(NSTextStorage *)textStorage;
-(long long)applicationFrameworkContext;
-(double)hyphenationFactor;
-(long long)typesetterBehavior;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(id)substituteFontForFont:(id)arg1 ;
-(void)setTypesetterBehavior:(long long)arg1 ;
-(NSArray *)textContainers;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char*)arg6 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char*)arg5 ;
-(id)attributedString;
-(void)enumerateEnclosingRectsForCharacterRange:(NSRange)arg1 withinSelectedCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned long long)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned long long)arg1 alternatePositions:(BOOL)arg2 inDisplayOrder:(BOOL)arg3 positions:(double*)arg4 characterIndexes:(unsigned long long*)arg5 ;
-(void)setHyphenationFactor:(double)arg1 ;
-(void)enumerateEnclosingRectsForGlyphRange:(NSRange)arg1 withinSelectedGlyphRange:(NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(CGRect*)rectArrayForCharacterRange:(NSRange)arg1 withinSelectedCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long*)arg4 ;
-(CGRect*)_rectArrayForRange:(NSRange)arg1 withinSelectionRange:(NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long*)arg7 rangeWithinContainer:(NSRange*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9 rectArray:(CGRect*)arg10 rectArrayCapacity:(unsigned long long)arg11 ;
-(void)drawSpellingUnderlineForGlyphRange:(NSRange)arg1 spellingState:(long long)arg2 inGlyphRange:(NSRange)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 type:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 isStrikethrough:(BOOL)arg7 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(double*)arg3 ;
-(id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2 ;
-(void)drawUnderlineForGlyphRange:(NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(long long)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned long long)arg1 inDisplayOrder:(BOOL)arg2 positions:(double*)arg3 characterIndexes:(unsigned long long*)arg4 count:(unsigned long long*)arg5 alternatePositions:(double*)arg6 characterIndexes:(unsigned long long*)arg7 count:(unsigned long long*)arg8 ;
-(CGRect*)_rectArrayForRange:(NSRange)arg1 withinSelectionRange:(NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long*)arg7 rangeWithinContainer:(NSRange*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9 ;
-(void)invalidateGlyphsForCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 actualCharacterRange:(NSRange*)arg3 ;
-(void)drawStrikethroughForGlyphRange:(NSRange)arg1 strikethroughType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)insertGlyphs:(const unsigned*)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4 ;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3 ;
-(void)enumerateLineFragmentsForGlyphRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)synchronizesAlignmentToDirection;
-(void)dealloc;
-(void)setUnderlineColorForTextAlternatives:(id)arg1 ;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(void)finalize;
-(CGRect)boundingRectForGlyphRange:(NSRange)arg1 inTextContainer:(id)arg2 ;
-(void)ensureLayoutForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(void)setUnderlineColorForSpelling:(id)arg1 ;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(BOOL)hasNonContiguousLayout;
-(unsigned long long)firstUnlaidGlyphIndex;
-(BOOL)isScrolling;
-(void)setStyleEffectConfiguration:(CUIStyleEffectConfiguration *)arg1 ;
-(void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(NSRange)arg3 ;
-(BOOL)limitsLayoutForSuspiciousContents;
-(void)ensureLayoutForCharacterRange:(NSRange)arg1 ;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(id)init;
-(void)addTextContainer:(id)arg1 ;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)setGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 ;
-(void)setDelegate:(id<NSLayoutManagerDelegate>)arg1 ;
-(NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(unsigned long long)glyphIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 ;
-(unsigned long long)characterIndexForGlyphAtIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsNonContiguousLayout:(BOOL)arg1 ;
-(NSRange)glyphRangeForTextContainer:(id)arg1 ;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)_commonInit;
-(CGPoint)locationForGlyphAtIndex:(unsigned long long)arg1 ;
-(id)typesetter;
-(NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2 ;
-(id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(unsigned long long)glyphIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(double*)arg3 ;
-(long long)propertyForGlyphAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)glyphIndexForCharacterAtIndex:(unsigned long long)arg1 ;
-(void)setDidCompleteLayoutObserverBlock:(/*^block*/id)arg1 ;
-(id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(NSParagraphArbitrator *)paragraphArbitrator;
-(unsigned short)glyphAtIndex:(unsigned long long)arg1 ;
-(long long)intAttribute:(long long)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(CGRect*)rectArrayForGlyphRange:(NSRange)arg1 withinSelectedGlyphRange:(NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long*)arg4 ;
-(BOOL)_drawsUnderlinesLikeWebKit;
-(BOOL)notShownAttributeForGlyphAtIndex:(unsigned long long)arg1 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 inContext:(CGContextRef)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(CGPoint)arg7 breakForDescenders:(BOOL)arg8 flipped:(BOOL)arg9 ;
-(BOOL)_canDoLayout;
-(id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(double)defaultBaselineOffsetForFont:(id)arg1 ;
-(void)_showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(id)renderingColorForDocumentColor:(id)arg1 ;
-(void)_showAttachmentCell:(id)arg1 inRect:(CGRect)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 inContext:(CGContextRef)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(CGPoint)arg7 breakForDescenders:(BOOL)arg8 ;
-(void)_mergeLayoutHoles;
-(void)_lineGlyphRange:(NSRange)arg1 type:(long long)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 isStrikethrough:(BOOL)arg6 ;
-(NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)arg1 ;
-(id)glyphGenerator;
-(NSRange)_blockRangeForCharRange:(NSRange)arg1 ;
-(NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)arg1 ;
-(NSRange)_blockRowRangeForCharRange:(NSRange)arg1 completeRows:(BOOL*)arg2 ;
-(NSRange)_blockRowRangeForCharRange:(NSRange)arg1 ;
-(void)setLocation:(CGPoint)arg1 forStartOfGlyphRange:(NSRange)arg2 ;
-(unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4 ;
-(void)_setTextContainer:(id)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)_fillGlyphHoleForCharacterRange:(NSRange)arg1 startGlyphIndex:(unsigned long long)arg2 desiredNumberOfCharacters:(unsigned long long)arg3 ;
-(void)_setExtraLineFragmentRect:(CGRect)arg1 usedRect:(CGRect)arg2 textContainer:(id)arg3 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 ;
-(void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned long long)arg1 ;
-(CGRect)layoutRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned long long)arg1 forCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 lineLimit:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long*)arg5 ;
-(id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 includeBlocks:(BOOL)arg3 ;
-(void)setTextContainer:(id)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned long long)arg1 nextGlyphIndex:(unsigned long long*)arg2 ;
-(void)_invalidateUsageForTextContainersInRange:(NSRange)arg1 ;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)arg1 isSoft:(BOOL)arg2 invalidateUsage:(BOOL)arg3 ;
-(void)_resizeTextViewForTextContainer:(id)arg1 ;
-(void)_invalidateInsertionPoint;
-(void)invalidateDisplayForGlyphRange:(NSRange)arg1 ;
-(void)_invalidateDisplayIfNeeded;
-(void)_setRowArrayCache:(id)arg1 ;
-(/*^block*/id)didCompleteLayoutObserverBlock;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)arg1 isSoft:(BOOL)arg2 ;
-(BOOL)_hasSeenRightToLeft;
-(id)underlineColorForSpelling;
-(void)_fillLayoutHoleForCharacterRange:(NSRange)arg1 desiredNumberOfLines:(unsigned long long)arg2 isSoft:(BOOL)arg3 ;
-(id)_lineFragmentDescription:(BOOL)arg1 ;
-(unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_fillLayoutHoleAtIndex:(unsigned long long)arg1 desiredNumberOfLines:(unsigned long long)arg2 ;
-(id)_lineFragmentDescriptionForGlyphRange:(NSRange)arg1 includeGlyphLocations:(BOOL)arg2 ;
-(id)_glyphDescriptionForGlyphRange:(NSRange)arg1 ;
-(unsigned long long)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(BOOL)arg2 ;
-(id)_lineFragmentDescription;
-(void)_recalculateUsageForTextContainerAtIndex:(unsigned long long)arg1 ;
-(void)_growCachedRectArrayToSize:(unsigned long long)arg1 ;
-(void)_setCachedTextContainer:(id)arg1 isVertical:(BOOL)arg2 ;
-(CGSize)attachmentSizeForGlyphAtIndex:(unsigned long long)arg1 ;
-(void)_resetCachedTextContainer;
-(NSRange)_glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 okToFillHoles:(BOOL)arg3 ;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 hintGlyphRange:(NSRange)arg3 okToFillHoles:(BOOL)arg4 ;
-(id)_containerDescription;
-(double)defaultLineHeightForFont:(id)arg1 ;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 okToFillHoles:(BOOL)arg3 ;
-(void)_markSelfAsDirtyForBackgroundLayout:(id)arg1 ;
-(CGRect)boundsRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)fillBackgroundRectArray:(const CGRect*)arg1 count:(unsigned long long)arg2 forCharacterRange:(NSRange)arg3 color:(id)arg4 ;
-(void)showAttachmentCell:(id)arg1 inRect:(CGRect)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)fillMarkedBackgroundRectArray:(const CGRect*)arg1 count:(unsigned long long)arg2 forCharacterRange:(NSRange)arg3 color:(id)arg4 ;
-(void)showAttachment:(id)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)underlineGlyphRange:(NSRange)arg1 underlineType:(long long)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 ;
-(id)_rowArrayCache;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)setBaselineOffset:(double)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)strikethroughGlyphRange:(NSRange)arg1 strikethroughType:(long long)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 ;
-(id<NSLayoutManagerDelegate>)delegate;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 offsetPerLineEstimate:(double)arg2 ;
-(void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(CGRect)arg2 ;
-(id)_glyphDescription;
-(void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)arg1 ;
-(void)_mergeGlyphHoles;
-(NSRange)_blockRangeForGlyphRange:(NSRange)arg1 ;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)arg1 completeRows:(BOOL*)arg2 ;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)arg1 ;
-(NSRange)_extendedCharRangeForInvalidation:(NSRange)arg1 editedCharRange:(NSRange)arg2 ;
-(void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)arg1 byDelta:(long long)arg2 ;
-(void)_fillGlyphHoleAtIndex:(unsigned long long)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 ;
-(unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 ;
-(unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 ;
-(NSRange)_exactGlyphRangeForCharacterRange:(NSRange)arg1 ;
-(id)_glyphLocationDescription;
-(id)_glyphHoleDescription;
-(id)_layoutHoleDescription;
-(id)_glyphTreeDescription;
-(id)_layoutTreeDescription;
-(id)_blockDescription;
-(NSStoredContainerUsage*)_validatedStoredUsageForTextContainerAtIndex:(unsigned long long)arg1 ;
-(id)_selectedRanges;
-(void)_fixSelectionAfterChangeInCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)_drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)flipsIfNeeded;
-(CGRect)_boundingRectForGlyphRange:(NSRange)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 fullLineRectsOnly:(BOOL)arg4 ;
-(void)_firstTextViewChanged;
-(unsigned short)CGGlyphAtIndex:(unsigned long long)arg1 ;
-(NSRange)_glyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 okToFillHoles:(BOOL)arg4 ;
-(void)_drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(id)selectedTextAttributesForCharacterAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(char*)_packedGlyphs:(unsigned long long)arg1 range:(NSRange)arg2 length:(unsigned long long*)arg3 ;
-(BOOL)_needToFlushGlyph;
-(unsigned)_glyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long*)arg2 glyphInscription:(unsigned long long*)arg3 isValidIndex:(BOOL*)arg4 ;
-(void)_setNeedToFlushGlyph:(BOOL)arg1 ;
-(CGRect)_currentAttachmentRect;
-(void)_simpleInsertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 elastic:(BOOL)arg4 ;
-(void)_simpleDeleteGlyphsInRange:(NSRange)arg1 ;
-(id)_attachmentSizesRun;
-(void)_insertGlyphs:(unsigned*)arg1 elasticAttributes:(BOOL*)arg2 count:(unsigned long long)arg3 atGlyphIndex:(unsigned long long)arg4 characterIndex:(unsigned long long)arg5 ;
-(void)_promoteGlyphStoreToFormat:(unsigned long long)arg1 ;
-(unsigned long long)_currentAttachmentIndex;
-(void)_setCurrentAttachmentRect:(CGRect)arg1 index:(unsigned long long)arg2 ;
-(void)_clearCurrentAttachmentSettings;
-(void)_clearTemporaryAttributes;
-(void)_clearTemporaryAttributesForCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)setFlipsIfNeeded:(BOOL)arg1 ;
-(void)setAllowsOriginalFontMetricsOverride:(BOOL)arg1 ;
-(BOOL)allowsOriginalFontMetricsOverride;
-(void)_setHasSeenRightToLeft:(BOOL)arg1 ;
-(BOOL)ignoresViewTransformations;
-(void)setIgnoresViewTransformations:(BOOL)arg1 ;
-(BOOL)ignoresAntialiasThreshold;
-(BOOL)_alwaysDrawsActive;
-(void)setIgnoresAntialiasThreshold:(BOOL)arg1 ;
-(void)_setAlwaysDrawsActive:(BOOL)arg1 ;
-(id)_insertionPointHelperForGlyphAtIndex:(unsigned long long)arg1 ;
-(id)_selectionRangesForInsertionPointRange:(NSRange)arg1 ;
-(void)_setDrawsUnderlinesLikeWebKit:(BOOL)arg1 ;
-(void)_setMirrorsTextAlignment:(BOOL)arg1 ;
-(BOOL)_forcesTrackingFloor;
-(void)_setForcesTrackingFloor:(BOOL)arg1 ;
-(void)setParagraphArbitrator:(NSParagraphArbitrator *)arg1 ;
-(void)endScrollingForView:(id)arg1 textContainer:(id)arg2 ;
-(id)viewProviderForTextAttachment:(id)arg1 characterIndex:(unsigned long long)arg2 ;
-(void)setViewProvider:(id)arg1 forTextAttachment:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)beginScrollingForView:(id)arg1 textContainer:(id)arg2 ;
-(CGRect)prepareLayoutForBoundingRect:(CGRect)arg1 textContainer:(id)arg2 ;
-(id)_stringForLoggingLineFragmentForGlyphAtIndex:(long long)arg1 ;
-(void)getFirstUnlaidCharacterIndex:(unsigned long long*)arg1 glyphIndex:(unsigned long long*)arg2 ;
-(CUIStyleEffectConfiguration *)styleEffectConfiguration;
-(void)setUsesDefaultHyphenation:(BOOL)arg1 ;
-(void)setEllipsisGlyphAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)addTemporaryAttributes:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(void)invalidateDisplayForCharacterRange:(NSRange)arg1 ;
-(void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(void)setBackgroundLayoutEnabled:(BOOL)arg1 ;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg1 ;
-(void)_setHyphenationFactor:(double)arg1 ;
-(void)textContainerChangedGeometry:(id)arg1 ;
-(void)ensureLayoutForGlyphRange:(NSRange)arg1 ;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(BOOL)arg3 ;
-(id)underlineColorForTextAlternatives;
-(void)setGlyphGenerator:(id)arg1 ;
-(void)insertTextContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)arg1 ;
-(void)textContainerChangedTextView:(id)arg1 ;
-(void)_invalidateGlyphsForCharacterRange:(NSRange)arg1 editedCharacterRange:(NSRange)arg2 changeInLength:(long long)arg3 actualCharacterRange:(NSRange*)arg4 ;
-(void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
-(void)_primitiveDeleteGlyphsInRange:(NSRange)arg1 ;
-(unsigned long long)firstUnlaidCharacterIndex;
-(void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)ensureGlyphsForCharacterRange:(NSRange)arg1 ;
-(BOOL)usesScreenFonts;
-(unsigned short)glyphAtIndex:(unsigned long long)arg1 isValidIndex:(BOOL*)arg2 ;
-(unsigned short)CGGlyphAtIndex:(unsigned long long)arg1 isValidIndex:(BOOL*)arg2 ;
-(void)replaceTextStorage:(id)arg1 ;
-(id)_glyphGenerator;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(BOOL)arg3 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(double)fractionOfDistanceThroughGlyphForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 ;
-(void)_setGlyphGenerator:(id)arg1 ;
-(void)setTypesetter:(id)arg1 ;
-(void)removeTextContainerAtIndex:(unsigned long long)arg1 ;
-(void)textContainerChangedTextView:(id)arg1 fromTextView:(id)arg2 ;
-(BOOL)backgroundLayoutEnabled;
-(void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 integerOffsetPerLineEstimate:(unsigned long long)arg2 ;
-(void)setUsesScreenFonts:(BOOL)arg1 ;
-(void)setShowsInvisibleCharacters:(BOOL)arg1 ;
-(BOOL)showsInvisibleCharacters;
-(void)setShowsControlCharacters:(BOOL)arg1 ;
-(BOOL)showsControlCharacters;
-(void)ensureGlyphsForGlyphRange:(NSRange)arg1 ;
-(BOOL)_mirrorsTextAlignment;
-(BOOL)backgroundColorProvidesOpaqueSurface;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 isSoft:(BOOL)arg2 actualCharacterRange:(NSRange*)arg3 ;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)replaceGlyphAtIndex:(unsigned long long)arg1 withGlyph:(unsigned)arg2 ;
-(void)setCharacterIndex:(unsigned long long)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)arg1 ;
-(BOOL)isValidGlyphIndex:(unsigned long long)arg1 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(BOOL*)arg5 ;
-(unsigned long long)getGlyphs:(unsigned*)arg1 range:(NSRange)arg2 ;
-(void)setExtraLineFragmentRect:(CGRect)arg1 usedRect:(CGRect)arg2 textContainer:(id)arg3 ;
-(void)setLocation:(CGPoint)arg1 forStartOfGlyphRange:(NSRange)arg2 coalesceRuns:(BOOL)arg3 ;
-(void)setLocations:(CGPoint*)arg1 startingGlyphIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3 forGlyphRange:(NSRange)arg4 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(BOOL)arg3 ;
-(CGRect)layoutRectForTextBlock:(id)arg1 glyphRange:(NSRange)arg2 ;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 allowLayout:(BOOL)arg3 ;
-(BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)arg1 ;
-(NSRange)truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned long long)arg1 ;
-(void)setLayoutRect:(CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(NSRange)arg3 ;
-(void)setBoundsRect:(CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(NSRange)arg3 ;
-(CGRect)boundsRectForTextBlock:(id)arg1 glyphRange:(NSRange)arg2 ;
-(NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned long long)arg1 ;
-(void)setTemporaryAttributes:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)setSynchronizesAlignmentToDirection:(BOOL)arg1 ;
-(id)_temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(BOOL)allowsNonContiguousLayout;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(double)_hyphenationFactor;
-(void)ensureLayoutForTextContainer:(id)arg1 ;
-(void)drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(NSRange)glyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(unsigned long long)numberOfGlyphs;
-(double)baselineOffsetForGlyphAtIndex:(unsigned long long)arg1 ;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSTextContainer *)extraLineFragmentTextContainer;
-(CGRect)extraLineFragmentRect;
-(CGRect)extraLineFragmentUsedRect;
-(id)destinationTextContainerForRange:(NSRange)arg1 inTextContainer:(id)arg2 ;
-(id)layoutFragmentsForReplacingCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 rect:(CGRect)arg3 textContainer:(id)arg4 ;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(id)description;
-(BOOL)usesDefaultHyphenation;
@end
