/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSuggestionsMapsSyncConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<MapsSuggestionsMapsSyncConnectorDelegate>)delegate;
-(BOOL)allContentOfType:(long long)arg1 handler:(/*^block*/id)arg2;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1;
-(id)newReviewedPlace;

@end

