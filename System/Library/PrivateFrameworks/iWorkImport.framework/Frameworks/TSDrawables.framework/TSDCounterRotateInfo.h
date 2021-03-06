/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDResizingAwareInfo.h>
#import <TSDrawables/TSDContainerInfo.h>

@class TSDInfoGeometry, TSDGroupInfo, TSDDrawableInfo, NSString, NSArray;

@interface TSDCounterRotateInfo : NSObject <TSDResizingAwareInfo, TSDContainerInfo> {

	TSDInfoGeometry* _geometry;
	TSDGroupInfo* _parentGroup;
	TSDDrawableInfo* _childInfo;
	CGAffineTransform _counterTransform;

}

@property (nonatomic,__weak,readonly) TSDDrawableInfo * childInfo;                                       //@synthesize childInfo=_childInfo - In the implementation block
@property (nonatomic,__weak,readonly) TSDGroupInfo * parentGroup;                                        //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,nonatomic) CGAffineTransform counterTransform;                                         //@synthesize counterTransform=_counterTransform - In the implementation block
@property (nonatomic,copy) TSDInfoGeometry * geometry;                                                   //@synthesize geometry=_geometry - In the implementation block
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isInlineWithTextWithWrap,nonatomic,readonly) BOOL inlineWithTextWithWrap; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) BOOL isMaster; 
+(id)infoGeometryForTransformInRoot:(CGAffineTransform)arg1 isChildFlipped:(BOOL)arg2 ;
+(CGAffineTransform)counterTransformForTransformInRoot:(CGAffineTransform)arg1 ;
+(id)p_infoGeometryForCounterTransform:(CGAffineTransform)arg1 isChildFlipped:(BOOL)arg2 ;
+(id)infoGeometryInRootIncludingCounterRotateIfNeededForDrawable:(id)arg1 ;
-(BOOL)isSelectable;
-(TSDGroupInfo *)parentGroup;
-(id)copyWithContext:(id)arg1 ;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
-(TSDInfoGeometry *)geometry;
-(Class)repClass;
-(void)setParentInfo:(NSObject*<TSDInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(BOOL)isThemeContent;
-(NSObject*<TSDInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(NSArray *)childInfos;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(BOOL)isInlineWithTextWithWrap;
-(id)infoForSelectionPath:(id)arg1 ;
-(void)setCounterTransform:(CGAffineTransform)arg1 ;
-(id)initWithChildInfo:(id)arg1 parentGroup:(id)arg2 counterTransform:(CGAffineTransform)arg3 ;
-(TSDDrawableInfo *)childInfo;
-(CGAffineTransform)counterTransform;
@end

