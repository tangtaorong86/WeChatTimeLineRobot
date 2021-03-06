/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class UIView, CContact, UIButton, UILabel;
@protocol WCContactItemDeleteViewDelegate;

@interface WCContactItemDeleteView : MMUIView {
	UILabel* _displayNameLabel;
	UIView* _headImageView;
	UIButton* _deleteButton;
	CContact* _contact;
	id<WCContactItemDeleteViewDelegate> _deleteViewDelegate;
}
@property(assign, nonatomic) __weak id<WCContactItemDeleteViewDelegate> deleteViewDelegate;
@property(retain, nonatomic) CContact* contact;
-(void).cxx_destruct;
-(id)initWithContact:(id)contact;
-(void)onClickDeleteButton;
-(void)onClickHeadImage;
-(void)initDisplayName;
-(void)initHeadImage;
-(void)initDeleteButton;
@end

