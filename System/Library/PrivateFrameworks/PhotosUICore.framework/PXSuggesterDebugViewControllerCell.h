/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITableViewCell.h>

@class PHSuggestion;

@interface PXSuggesterDebugViewControllerCell : UITableViewCell {

	PHSuggestion* _suggestion;

}

@property (retain) PHSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setSuggestion:(PHSuggestion *)arg1 ;
-(PHSuggestion *)suggestion;
-(void)persist:(id)arg1 ;
@end
