//
//  GHModel.h
//  GitHubKit
//
//  Created by xaoxuu on 12/09/2017.
//  Copyright © 2017 xaoxuu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GHBaseModel : UIView

@end


#pragma mark - user model

// @xaoxuu: all
@interface GHUserModel : GHBaseModel

// @xaoxuu: login
@property (copy, nonatomic) NSString *login;
// @xaoxuu: id
@property (assign, nonatomic) NSInteger userId;
// @xaoxuu: avatar_url
@property (copy, nonatomic) NSString *avatar_url;
// @xaoxuu: gravatar_id
@property (copy, nonatomic) NSString *gravatar_id;
// @xaoxuu: url
@property (copy, nonatomic) NSString *url;
// @xaoxuu: html_url
@property (copy, nonatomic) NSString *html_url;
// @xaoxuu: followers_url
@property (copy, nonatomic) NSString *followers_url;
// @xaoxuu: following_url
@property (copy, nonatomic) NSString *following_url;
// @xaoxuu: gists_url
@property (copy, nonatomic) NSString *gists_url;
// @xaoxuu: starred_url
@property (copy, nonatomic) NSString *starred_url;
// @xaoxuu: subscriptions_url
@property (copy, nonatomic) NSString *subscriptions_url;
// @xaoxuu: organizations_url
@property (copy, nonatomic) NSString *organizations_url;
// @xaoxuu: repos_url
@property (copy, nonatomic) NSString *repos_url;
// @xaoxuu: events_url
@property (copy, nonatomic) NSString *events_url;
// @xaoxuu: received_events_url
@property (copy, nonatomic) NSString *received_events_url;
// @xaoxuu: type
@property (copy, nonatomic) NSString *type;
// @xaoxuu: site_admin
@property (assign, nonatomic) BOOL site_admin;

@end

@interface GHLiteUserModel : GHBaseModel

// @xaoxuu: name
@property (copy, nonatomic) NSString *name;
// @xaoxuu: email
@property (copy, nonatomic) NSString *email;
// @xaoxuu: date
@property (copy, nonatomic) NSString *date;

@end

#pragma mark - repo model

// @xaoxuu: all
@interface GHRepoModel : GHBaseModel

// @xaoxuu: id <83962993>
@property (assign, nonatomic) NSInteger repo_id;
// @xaoxuu: name <"AXKit">
@property (copy, nonatomic) NSString *name;
// @xaoxuu: full_name <"xaoxuu/AXKit">
@property (copy, nonatomic) NSString *full_name;
// @xaoxuu: owner
@property (strong, nonatomic) GHUserModel *owner;
// @xaoxuu: private <false>
@property (assign, nonatomic) BOOL is_private;
// @xaoxuu: html_url <"https://github.com/xaoxuu/AXKit">
@property (copy, nonatomic) NSString *html_url;
// @xaoxuu: description <"系统类的功能扩展和一些常用的控件封装 https://axkit.xaoxuu.com">
@property (copy, nonatomic) NSString *repo_description;
// @xaoxuu: fork <false>
@property (assign, nonatomic) BOOL fork;
// @xaoxuu: url <"https://api.github.com/repos/xaoxuu/AXKit">
@property (copy, nonatomic) NSString *url;
// @xaoxuu: forks_url <"https://api.github.com/repos/xaoxuu/AXKit/forks">
@property (copy, nonatomic) NSString *forks_url;
// @xaoxuu: keys_url <"https://api.github.com/repos/xaoxuu/AXKit/keys{/key_id}">
@property (copy, nonatomic) NSString *keys_url;
// @xaoxuu: collaborators_url <"https://api.github.com/repos/xaoxuu/AXKit/collaborators{/collaborator}">
@property (copy, nonatomic) NSString *collaborators_url;
// @xaoxuu: teams_url <"https://api.github.com/repos/xaoxuu/AXKit/teams">
@property (copy, nonatomic) NSString *teams_url;
// @xaoxuu: hooks_url <"https://api.github.com/repos/xaoxuu/AXKit/hooks">
@property (copy, nonatomic) NSString *hooks_url;
// @xaoxuu: issue_events_url <"https://api.github.com/repos/xaoxuu/AXKit/issues/events{/number}">
@property (copy, nonatomic) NSString *issue_events_url;
// @xaoxuu: events_url <"https://api.github.com/repos/xaoxuu/AXKit/events">
@property (copy, nonatomic) NSString *events_url;
// @xaoxuu: assignees_url <"https://api.github.com/repos/xaoxuu/AXKit/assignees{/user}">
@property (copy, nonatomic) NSString *assignees_url;
// @xaoxuu: branches_url <"https://api.github.com/repos/xaoxuu/AXKit/branches{/branch}">
@property (copy, nonatomic) NSString *branches_url;
// @xaoxuu: tags_url <"https://api.github.com/repos/xaoxuu/AXKit/tags">
@property (copy, nonatomic) NSString *tags_url;
// @xaoxuu: blobs_url <"https://api.github.com/repos/xaoxuu/AXKit/git/blobs{/sha}">
@property (copy, nonatomic) NSString *blobs_url;
// @xaoxuu: git_tags_url <"https://api.github.com/repos/xaoxuu/AXKit/git/tags{/sha}">
@property (copy, nonatomic) NSString *git_tags_url;
// @xaoxuu: git_refs_url <"https://api.github.com/repos/xaoxuu/AXKit/git/refs{/sha}">
@property (copy, nonatomic) NSString *git_refs_url;
// @xaoxuu: trees_url <"https://api.github.com/repos/xaoxuu/AXKit/git/trees{/sha}">
@property (copy, nonatomic) NSString *trees_url;
// @xaoxuu: statuses_url <"https://api.github.com/repos/xaoxuu/AXKit/statuses/{sha}">
@property (copy, nonatomic) NSString *statuses_url;
// @xaoxuu: languages_url <"https://api.github.com/repos/xaoxuu/AXKit/languages">
@property (copy, nonatomic) NSString *languages_url;
// @xaoxuu: stargazers_url <"https://api.github.com/repos/xaoxuu/AXKit/stargazers">
@property (copy, nonatomic) NSString *stargazers_url;
// @xaoxuu: contributors_url <"https://api.github.com/repos/xaoxuu/AXKit/contributors">
@property (copy, nonatomic) NSString *contributors_url;
// @xaoxuu: subscribers_url <"https://api.github.com/repos/xaoxuu/AXKit/subscribers">
@property (copy, nonatomic) NSString *subscribers_url;
// @xaoxuu: subscription_url <"https://api.github.com/repos/xaoxuu/AXKit/subscription">
@property (copy, nonatomic) NSString *subscription_url;
// @xaoxuu: commits_url <"https://api.github.com/repos/xaoxuu/AXKit/commits{/sha}">
@property (copy, nonatomic) NSString *commits_url;
// @xaoxuu: git_commits_url <"https://api.github.com/repos/xaoxuu/AXKit/git/commits{/sha}">
@property (copy, nonatomic) NSString *git_commits_url;
// @xaoxuu: comments_url <"https://api.github.com/repos/xaoxuu/AXKit/comments{/number}">
@property (copy, nonatomic) NSString *comments_url;
// @xaoxuu: issue_comment_url <"https://api.github.com/repos/xaoxuu/AXKit/issues/comments{/number}">
@property (copy, nonatomic) NSString *issue_comment_url;
// @xaoxuu: contents_url <"https://api.github.com/repos/xaoxuu/AXKit/contents/{+path}">
@property (copy, nonatomic) NSString *contents_url;
// @xaoxuu: compare_url <"https://api.github.com/repos/xaoxuu/AXKit/compare/{base}...{head}">
@property (copy, nonatomic) NSString *compare_url;
// @xaoxuu: merges_url <"https://api.github.com/repos/xaoxuu/AXKit/merges">
@property (copy, nonatomic) NSString *merges_url;
// @xaoxuu: archive_url <"https://api.github.com/repos/xaoxuu/AXKit/{archive_format}{/ref}">
@property (copy, nonatomic) NSString *archive_url;
// @xaoxuu: downloads_url <"https://api.github.com/repos/xaoxuu/AXKit/downloads">
@property (copy, nonatomic) NSString *downloads_url;
// @xaoxuu: issues_url <"https://api.github.com/repos/xaoxuu/AXKit/issues{/number}">
@property (copy, nonatomic) NSString *issues_url;
// @xaoxuu: pulls_url <"https://api.github.com/repos/xaoxuu/AXKit/pulls{/number}">
@property (copy, nonatomic) NSString *pulls_url;
// @xaoxuu: milestones_url <"https://api.github.com/repos/xaoxuu/AXKit/milestones{/number}">
@property (copy, nonatomic) NSString *milestones_url;
// @xaoxuu: notifications_url <"https://api.github.com/repos/xaoxuu/AXKit/notifications{?since,all,participating}">
@property (copy, nonatomic) NSString *notifications_url;
// @xaoxuu: labels_url <"https://api.github.com/repos/xaoxuu/AXKit/labels{/name}">
@property (copy, nonatomic) NSString *labels_url;
// @xaoxuu: releases_url <"https://api.github.com/repos/xaoxuu/AXKit/releases{/id}">
@property (copy, nonatomic) NSString *releases_url;
// @xaoxuu: deployments_url <"https://api.github.com/repos/xaoxuu/AXKit/deployments">
@property (copy, nonatomic) NSString *deployments_url;
// @xaoxuu: created_at <"2017-03-05T10:48:51Z">
@property (copy, nonatomic) NSString *created_at;
// @xaoxuu: updated_at <"2017-07-24T03:33:08Z">
@property (copy, nonatomic) NSString *updated_at;
// @xaoxuu: pushed_at <"2017-09-09T10:35:54Z">
@property (copy, nonatomic) NSString *pushed_at;
// @xaoxuu: git_url <"git://github.com/xaoxuu/AXKit.git">
@property (copy, nonatomic) NSString *git_url;
// @xaoxuu: ssh_url <"git@github.com:xaoxuu/AXKit.git">
@property (copy, nonatomic) NSString *ssh_url;
// @xaoxuu: clone_url <"https://github.com/xaoxuu/AXKit.git">
@property (copy, nonatomic) NSString *clone_url;
// @xaoxuu: svn_url <"https://github.com/xaoxuu/AXKit">
@property (copy, nonatomic) NSString *svn_url;
// @xaoxuu: homepage <null>
@property (copy, nonatomic) NSString *homepage;
// @xaoxuu: size <10740>
@property (assign, nonatomic) NSInteger size;
// @xaoxuu: stargazers_count <2>
@property (assign, nonatomic) NSInteger stargazers_count;
// @xaoxuu: watchers_count <2>
@property (assign, nonatomic) NSInteger watchers_count;
// @xaoxuu: language <"Objective-C">
@property (copy, nonatomic) NSString *language;
// @xaoxuu: has_issues <true>
@property (assign, nonatomic) BOOL has_issues;
// @xaoxuu: has_projects
@property (assign, nonatomic) BOOL has_projects;
// @xaoxuu: has_downloads
@property (assign, nonatomic) BOOL has_downloads;
// @xaoxuu: has_wiki
@property (assign, nonatomic) BOOL has_wiki;
// @xaoxuu: has_pages
@property (assign, nonatomic) BOOL has_pages;
// @xaoxuu: forks_count
@property (assign, nonatomic) NSInteger forks_count;
// @xaoxuu: mirror_url
@property (copy, nonatomic) NSString *mirror_url;
// @xaoxuu: open_issues_count
@property (assign, nonatomic) NSInteger open_issues_count;
// @xaoxuu: forks
@property (assign, nonatomic) NSInteger forks;
// @xaoxuu: open_issues
@property (assign, nonatomic) NSInteger open_issues;
// @xaoxuu: watchers
@property (assign, nonatomic) NSInteger watchers;
// @xaoxuu: default_branch <"master">
@property (copy, nonatomic) NSString *default_branch;
// @xaoxuu: network_count
@property (assign, nonatomic) NSInteger network_count;
// @xaoxuu: subscribers_count
@property (assign, nonatomic) NSInteger subscribers_count;

@end

#pragma mark - label model

// @xaoxuu: all
@interface GHLabelModel : GHBaseModel

// @xaoxuu: id
@property (copy, nonatomic) NSString *label_id;
// @xaoxuu: url
@property (copy, nonatomic) NSString *url;
// @xaoxuu: name
@property (copy, nonatomic) NSString *name;
// @xaoxuu: color
@property (copy, nonatomic) NSString *color;
// @xaoxuu: default
@property (assign, nonatomic) BOOL is_default;

@end

#pragma mark - issue model

// @xaoxuu: all
@interface GHIssueModel : GHBaseModel

// @xaoxuu: url
@property (copy, nonatomic) NSString *url;
// @xaoxuu: repository_url
@property (copy, nonatomic) NSString *repository_url;
// @xaoxuu: labels_url
@property (copy, nonatomic) NSString *labels_url;
// @xaoxuu: comments_url
@property (copy, nonatomic) NSString *comments_url;
// @xaoxuu: events_url
@property (copy, nonatomic) NSString *events_url;
// @xaoxuu: html_url
@property (copy, nonatomic) NSString *html_url;
// @xaoxuu: id
@property (assign, nonatomic) NSInteger issue_id;
// @xaoxuu: number
@property (assign, nonatomic) NSInteger number;
// @xaoxuu: title
@property (copy, nonatomic) NSString *title;
// @xaoxuu: user
@property (strong, nonatomic) GHUserModel *user;
// @xaoxuu: labels
@property (strong, nonatomic) NSMutableArray<GHLabelModel *> *labels;
// @xaoxuu: state
@property (copy, nonatomic) NSString *state;
// @xaoxuu: locked
@property (assign, nonatomic) BOOL locked;
// @xaoxuu: assignee
@property (strong, nonatomic) id assignee;
// @xaoxuu: assignees
@property (strong, nonatomic) id assignees;
// @xaoxuu: milestone
@property (strong, nonatomic) id milestone;
// @xaoxuu: comments
@property (assign, nonatomic) NSInteger comments;
// @xaoxuu: created_at
@property (copy, nonatomic) NSString *created_at;
// @xaoxuu: updated_at
@property (copy, nonatomic) NSString *updated_at;
// @xaoxuu: closed_at
@property (copy, nonatomic) NSString *closed_at;
// @xaoxuu: author_association
@property (copy, nonatomic) NSString *author_association;
// @xaoxuu: body
@property (copy, nonatomic) NSString *body;
// @xaoxuu: score
@property (assign, nonatomic) NSInteger score;

@end


// @xaoxuu: all
@interface GHIssuesModel : GHBaseModel

// @xaoxuu: total_count
@property (assign, nonatomic) NSInteger total_count;
// @xaoxuu: incomplete_results
@property (assign, nonatomic) BOOL incomplete_results;
// @xaoxuu: items
@property (strong, nonatomic) NSMutableArray<GHIssueModel *> *items;

@end



#pragma mark - tree model

@interface GHTreeModel : GHBaseModel

// @xaoxuu: sha
@property (copy, nonatomic) NSString *sha;
// @xaoxuu: url
@property (copy, nonatomic) NSString *url;

@end

#pragma mark - commit model

@interface GHCommitInfoModel : GHBaseModel

// @xaoxuu: author
@property (strong, nonatomic) GHLiteUserModel *author;
// @xaoxuu: committer
@property (strong, nonatomic) GHLiteUserModel *committer;
// @xaoxuu: message
@property (copy, nonatomic) NSString *message;
// @xaoxuu: tree
@property (strong, nonatomic) GHTreeModel *tree;
// @xaoxuu: url
@property (copy, nonatomic) NSString *url;
// @xaoxuu: comment_count
@property (assign, nonatomic) NSInteger comment_count;

@end

@interface GHCommitModel : GHBaseModel

// @xaoxuu: sha
@property (copy, nonatomic) NSString *sha;
// @xaoxuu: commit
@property (strong, nonatomic) GHCommitInfoModel *commit;
// @xaoxuu: url
@property (copy, nonatomic) NSString *url;
// @xaoxuu: html_url
@property (copy, nonatomic) NSString *html_url;
// @xaoxuu: comments_url
@property (copy, nonatomic) NSString *comments_url;
// @xaoxuu: author
@property (strong, nonatomic) GHUserModel *author;
// @xaoxuu: committer
@property (strong, nonatomic) GHUserModel *committer;
// @xaoxuu: parents
@property (strong, nonatomic) NSArray<GHTreeModel *> *parents;

@end

#pragma mark - tag model

@interface GHTagModel : GHBaseModel

// @xaoxuu: name
@property (copy, nonatomic) NSString *name;
// @xaoxuu: zipball_url
@property (copy, nonatomic) NSString *zipball_url;
// @xaoxuu: tarball_url
@property (copy, nonatomic) NSString *tarball_url;
// @xaoxuu: commit
@property (strong, nonatomic) GHTreeModel *commit;

@end

#pragma mark - release model

@interface GHReleaseModel : GHBaseModel

// @xaoxuu: url <"https://api.github.com/repos/xaoxuu/AXKit/releases/7420117">
@property (copy, nonatomic) NSString *url;
// @xaoxuu: assets_url <"https://api.github.com/repos/xaoxuu/AXKit/releases/7420117/assets">
@property (copy, nonatomic) NSString *assets_url;
// @xaoxuu: upload_url <"https://uploads.github.com/repos/xaoxuu/AXKit/releases/7420117/assets{?name,label}">
@property (copy, nonatomic) NSString *upload_url;
// @xaoxuu: html_url <"https://github.com/xaoxuu/AXKit/releases/tag/0.0.14">
@property (copy, nonatomic) NSString *html_url;
// @xaoxuu: id
@property (assign, nonatomic) NSInteger release_id;
// @xaoxuu: tag_name <"0.0.14">
@property (copy, nonatomic) NSString *tag_name;
// @xaoxuu: target_commitish <"master">
@property (copy, nonatomic) NSString *target_commitish;
// @xaoxuu: name <"0.0.14">
@property (copy, nonatomic) NSString *name;
// @xaoxuu: draft <false>
@property (assign, nonatomic) BOOL draft;
// @xaoxuu: author
@property (strong, nonatomic) GHUserModel *author;
// @xaoxuu: prerelease
@property (assign, nonatomic) BOOL prerelease;
// @xaoxuu: created_at <"2017-08-17T03:13:49Z">
@property (copy, nonatomic) NSString *created_at;
// @xaoxuu: published_at <"2017-08-17T03:16:06Z">
@property (copy, nonatomic) NSString *published_at;
// @xaoxuu: assets
@property (strong, nonatomic) NSArray *assets;
// @xaoxuu: tarball_url <"https://api.github.com/repos/xaoxuu/AXKit/tarball/0.0.14">
@property (copy, nonatomic) NSString *tarball_url;
// @xaoxuu: zipball_url <"https://api.github.com/repos/xaoxuu/AXKit/zipball/0.0.14">
@property (copy, nonatomic) NSString *zipball_url;
// @xaoxuu: body
@property (copy, nonatomic) NSString *body;


@end


