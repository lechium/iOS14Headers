/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSKSelection.h>

@class NSOrderedSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection {

	NSOrderedSet* _slideNodes;
	KNSlideNode* _slideNodeToEdit;

}

@property (nonatomic,readonly) NSOrderedSet * slideNodes;                        //@synthesize slideNodes=_slideNodes - In the implementation block
@property (nonatomic,readonly) KNSlideNode * slideNodeToEdit;                    //@synthesize slideNodeToEdit=_slideNodeToEdit - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isContiguous,nonatomic,readonly) BOOL contiguous; 
+(Class)archivedSelectionClass;
-(id)init;
-(BOOL)isContiguous;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)hash;
-(id)description;
-(id)initWithArchive:(const SlideCollectionSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(SlideCollectionSelectionArchive*)arg1 archiver:(id)arg2 ;
-(NSOrderedSet *)slideNodes;
-(KNSlideNode *)slideNodeToEdit;
-(id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2 ;
-(id)initWithSlideNode:(id)arg1 ;
-(id)UUIDDescription;
@end
