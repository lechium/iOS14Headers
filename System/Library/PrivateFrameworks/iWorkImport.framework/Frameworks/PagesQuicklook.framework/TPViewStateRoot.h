/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class TPArchivedLayoutState, TPArchivedUIState, TPLayoutState, TPUIState;

@interface TPViewStateRoot : TSPObject {

	TPArchivedLayoutState* _archivedLayoutState;
	TPArchivedUIState* _archivedUIState;

}

@property (nonatomic,copy) TPLayoutState * layoutState; 
@property (nonatomic,copy) TPUIState * uiState; 
-(TPLayoutState *)layoutState;
-(TPUIState *)uiState;
-(void)setLayoutState:(TPLayoutState *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
-(void)setUiState:(TPUIState *)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isEqualToViewStateRoot:(id)arg1 ;
-(id)initWithContext:(id)arg1 layoutState:(id)arg2 uiState:(id)arg3 ;
@end

