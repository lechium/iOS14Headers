/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource {

	NSArray* _concerns;
	long long _selectedConcernIndex;
	SUTextViewCell* _textViewCell;

}

@property (nonatomic,retain) NSArray * concerns;                           //@synthesize concerns=_concerns - In the implementation block
@property (assign,nonatomic) long long selectedConcernIndex;               //@synthesize selectedConcernIndex=_selectedConcernIndex - In the implementation block
@property (nonatomic,readonly) SUTextViewCell * textViewCell;              //@synthesize textViewCell=_textViewCell - In the implementation block
-(void)dealloc;
-(long long)tableViewStyle;
-(id)init;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(NSArray *)concerns;
-(id)cellForIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(long long)selectedConcernIndex;
-(void)setSelectedConcernIndex:(long long)arg1 ;
-(SUTextViewCell *)textViewCell;
-(void)setConcerns:(NSArray *)arg1 ;
-(id)_titleCellForIndexPath:(id)arg1 ;
@end

